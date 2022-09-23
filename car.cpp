/*  GUI database management application
    Copyright (C) 2022  Hubert Antczak
    This program is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.
    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.
    You should have received a copy of the GNU General Public License
    along with this program.  If not, see <https://www.gnu.org/licenses/>.*/

#include "car.h"

QVector <Car*> cars_vector_out;
QVector <Car*> Car::cars_vector_ = cars_vector_out;

int Car::mileage_filter_range_ = 0;
float Car::engine_cap_filter_range_ = 0.0;
float Car::hp_filter_range_ = 0.0;

Car::Car(): gps_(std::make_pair(false, false)), air_conditioning_(std::make_pair(false, false)),
            id_(0), mileage_(0), doors_(0), mark_("mark"), model_("model"), colour_("colour"),
            bodywork_("bodywork"), engine_capacity_(0.0), hp_(0), visibility_(true){}

void Car::setID(int id){
    id_ = id;
}

void Car::setMark(const QString &mark){
    mark_ = mark;
}

void Car::setModel(const QString &model){
    model_ = model;
}

void Car::setMileage(int mileage){
    mileage_ = mileage;
}

void Car::setEngineCap(float engine_capacity){
    engine_capacity_ = engine_capacity;
}

void Car::setHP(float hp){
    hp_ = hp;
}

void Car::setColour(const QString &colour){
    colour_ = colour;
}

void Car::setAirCond(std::pair<bool, bool> air_conditioning){
    air_conditioning_ = air_conditioning;
}

void Car::setGPS(std::pair<bool, bool> gps){
    gps_ = gps;
}

void Car::setDoors(int doors){
    doors_ = doors;
}

void Car::setBodywork(const QString &bodywork){
    bodywork_ = bodywork;
}

void Car::setMileageRange(int mileage){
    mileage_filter_range_ = mileage;
}

void Car::setEngineCapRange(float eng_cap){
    engine_cap_filter_range_ = eng_cap;
}
void Car::setHpRange(float hp){
    hp_filter_range_ = hp;
}

QString Car::getMark(){
    return mark_;
}

QString Car::getModel(){
    return model_;
}

QString Car::getColour(){
    return colour_;
}

QString Car::getBodywork(){
    return bodywork_;
}

QVector <Car*> Car::getVector(){
    return cars_vector_;
}

void Car::emplaceToVector(){
    cars_vector_.emplace_back(this);
}

void Car::clearVector(){
    cars_vector_.clear();
}

bool Car::operator==(const Car &car)const{
    return ((mark_ == car.mark_) || car.mark_ == "") &&
            ((model_ == car.model_) || car.model_ == "") &&
            ((colour_ == car.colour_) || car.colour_ == "") &&
            ((bodywork_ == car.bodywork_) || car.bodywork_ == "") &&
            (((mileage_ >= (car.mileage_ - mileage_filter_range_)) &&  (mileage_ <= (car.mileage_ + mileage_filter_range_))) || car.mileage_ == 0) &&
            (((engine_capacity_ >= (car.engine_capacity_ - engine_cap_filter_range_)) &&
              (engine_capacity_ <= (car.engine_capacity_ + engine_cap_filter_range_))) || car.engine_capacity_ == 0.0) &&
            (((hp_ >= (car.hp_ - hp_filter_range_)) &&  (hp_ <= (car.hp_ + hp_filter_range_))) || car.hp_ == 0.0) &&
            ((air_conditioning_ == car.air_conditioning_) || car.air_conditioning_ == std::make_pair(true, false)) &&
            ((gps_ == car.gps_) || car.gps_ == std::make_pair(true, false));
}

void Car::check_filters(Car *filter_car){
    for(auto &car : cars_vector_){
        if(car != nullptr){
            if(*car == *filter_car){
                car -> visibility_ = 1;
            }else{
                car -> visibility_ = 0;
            }
        }
    }
}

void Car::fillVector(QSqlDatabase &db){
    cars_vector_.clear();
    QSqlQuery query;
    if(query.exec("SELECT * FROM `car_dealer`")){
        while(query.next()){
            Car *car = new Car();
            car -> setID(query.value(0).toInt());
            car -> setMark(query.value(1).toString());
            car -> setModel(query.value(2).toString());
            car -> setMileage(query.value(3).toInt());
            car -> setEngineCap(query.value(4).toFloat());
            car -> setHP(query.value(5).toFloat())   ;
            car -> setColour(query.value(6).toString());
            car -> setAirCond(std::make_pair(query.value(7).toBool(), query.value(7).toBool()));
            car -> setGPS(std::make_pair(query.value(8).toBool(), query.value(8).toBool()));
            car -> setDoors(query.value(9).toInt());
            car -> setBodywork(query.value(10).toString());
            car -> emplaceToVector();
        }
    }else{
        qDebug() << "Error = " << db.lastError();
    }
}

void Car::display(QTableWidget *table){
    const int number_of_columns = 10;//czytanie z bazy danych sql?????????????????????????????????????
    int index = -1;
    int number_of_rows =0;
    QVector<QString> string_attributes;
    QStringList stringlist = {"MARK", "MODEL", "MILEAGE", "ENGINE CAP.", "HP", "COLOUR", "DOORS", "BODYWORK", "GPS", "AIR COND."};

    table -> clear();
    table -> clearContents();

    for(int i = 0; i <= table -> rowCount(); i++){
        table -> removeRow(i);
    }

    table -> setColumnCount(number_of_columns);
    table -> setHorizontalHeaderLabels(stringlist);

    for (Car* cars : cars_vector_){
        if(cars -> visibility_){
            number_of_rows++;
        }
    }

    for (Car* cars : cars_vector_){
        if(cars -> visibility_){
            index++;
            table -> setRowCount(number_of_rows - 1);
            table -> insertRow(index);

            string_attributes.emplace_back(QString(cars->mark_));
            string_attributes.emplace_back(QString(cars->model_));
            string_attributes.emplace_back(QString::number(cars->mileage_) + " km");
            string_attributes.emplace_back(QString::number(cars->engine_capacity_) + "l");
            string_attributes.emplace_back(QString::number(cars->hp_));
            string_attributes.emplace_back(QString(cars->colour_));
            string_attributes.emplace_back(QString::number(cars->doors_));
            string_attributes.emplace_back(QString(cars->bodywork_));
            if(cars -> gps_.first && cars -> gps_.second){
                string_attributes.emplace_back("YES");
            }else{
                string_attributes.emplace_back("NO");
            }
            if(cars -> air_conditioning_.first && cars -> air_conditioning_.second){
                string_attributes.emplace_back("YES");
            }else{
                string_attributes.emplace_back("NO");
            }

            for(int i = 0; i < number_of_columns; i++){
                QTableWidgetItem *item =  new QTableWidgetItem(string_attributes[i + (number_of_columns*index)]);
                item -> setFlags(item -> flags() ^ Qt::ItemIsEditable);
                table -> setItem(index, i, item);
            }
        }
    }
    string_attributes.clear();
}


