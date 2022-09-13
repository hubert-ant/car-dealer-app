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

#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "car.h"
#include "login.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    Login::readLogin();
    db = QSqlDatabase::addDatabase("QMYSQL");
    ui->setupUi(this);
}

MainWindow::~MainWindow(){
    delete ui;
}

QSqlDatabase MainWindow::read_database(const QString &database_name){
    db.setHostName("127.0.0.1");
    db.setDatabaseName(database_name);
    db.setUserName("root");
    db.setPassword("");

    return db;
}

void MainWindow::on_comboBox_currentTextChanged(const QString &arg1){
    Car::clearVector();

    if(arg1 == "Cars"){
        db = read_database("cars");
    }else if(arg1 == "Motorbikes"){
        db = read_database("motorbikes");
    }else{
        db = read_database("");
    }

    if(db.open()){
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
        db.close();

        ui -> checkBox -> setCheckState(Qt::PartiallyChecked);
        ui -> checkBox_2 -> setCheckState(Qt::PartiallyChecked);
        QVector <Car*> vector_of_cars = Car::getVector();

        //adding databse marks, bodyworks and colours to combobox
        for(auto it = vector_of_cars.begin(); it != vector_of_cars.end(); it++){
            if(ui -> comboBox_2 -> findText((*it) -> getMark()) == -1){
                ui -> comboBox_2 -> addItem((*it) -> getMark());
            }
            if(ui -> comboBox_4 -> findText((*it) -> getBodywork()) == -1){
                ui -> comboBox_4 -> addItem((*it) -> getBodywork());
            }
            if(ui -> comboBox_5 -> findText((*it) -> getColour()) == -1){
                ui -> comboBox_5 -> addItem((*it) -> getColour());
            }
        }

        Car::display(ui -> tableWidget);
        vector_of_cars.clear();
    }else{
        if(arg1 != ""){
            QMessageBox::information(this, "Connection", "Problems with connection to database.");
            ui -> comboBox -> setCurrentIndex(0);
        }
    }
}

void MainWindow::on_search_button_clicked(){//searching cars we want, using filter car with sepcified atributes
     Car *filter_car = new Car();
     QVector<Car*> vector_of_cars = Car::getVector();

     if(!vector_of_cars.empty()){
         filter_car -> setMark(ui-> comboBox_2 -> currentText());
         filter_car -> setModel(ui-> comboBox_3 -> currentText());
         filter_car -> setBodywork(ui-> comboBox_4 -> currentText());
         filter_car -> setColour(ui -> comboBox_5 -> currentText());
         filter_car -> setMileage(ui -> spinBox_3 -> value());
         filter_car -> setEngineCap(ui -> doubleSpinBox_2 -> value());
         filter_car -> setHP(ui -> spinBox_5 -> value());
         if(ui -> checkBox -> checkState() == Qt::Unchecked){
             filter_car -> setAirCond(std::make_pair(false, false));
         }else if(ui -> checkBox -> checkState() == Qt::PartiallyChecked){
             filter_car -> setAirCond(std::make_pair(true, false));
         }else{
             filter_car -> setAirCond(std::make_pair(true, true));
         }
         if(ui -> checkBox_2 -> checkState() == Qt::Unchecked){
             filter_car -> setGPS(std::make_pair(false, false));
         }else if(ui -> checkBox_2 -> checkState() == Qt::PartiallyChecked){
             filter_car -> setGPS(std::make_pair(true, false));
         }else{
             filter_car -> setGPS(std::make_pair(true, true));
         }

         Car::check_filters(filter_car);
         Car::display(ui -> tableWidget);
     }else{
         QMessageBox::information(this, "Searching", "Set connection with database first!");
     }

     vector_of_cars.clear();
     delete filter_car;
}

void MainWindow::on_comboBox_2_currentTextChanged(const QString &arg1){//adding models to comboBox - connected with marks
    ui -> comboBox_3 -> clear();
    ui -> comboBox_3 -> addItem("");
    QVector <Car*> vector_of_cars = Car::getVector();
    for(auto it = vector_of_cars.begin(); it != vector_of_cars.end(); it++){
        if(arg1 == (*it) -> getMark()){
            ui -> comboBox_3 -> addItem((*it) -> getModel());
        }
    }
    vector_of_cars.clear();
}

void MainWindow::on_spinBox_valueChanged(int arg1){
    if(ui -> spinBox_3 -> value() != 0){
        Car::setMileageRange(arg1);
    }else{
        if(arg1 != 0.0){
            ui -> spinBox -> setValue(0.0);
            QMessageBox::information(this, "Value", "Value of mileage filter has to be diffrent from zero!");
        }
    }
}

void MainWindow::on_doubleSpinBox_valueChanged(double arg1){
    if(ui -> doubleSpinBox_2 -> value() != 0){
        Car::setEngineCapRange(arg1);
    }else{
        if(arg1 != 0.0){
            ui -> doubleSpinBox -> setValue(0.0);
            QMessageBox::information(this, "Value", "Value of engine capacity filter has to be diffrent from zero!");
        }
    }
}

void MainWindow::on_spinBox_2_valueChanged(int arg1){
    if(ui -> spinBox_5 -> value() != 0){
        Car::setHpRange(arg1);
    }else{
        if(arg1 != 0.0){
            ui -> spinBox_2 -> setValue(0.0);
            QMessageBox::information(this, "Value", "Value of horse power filter has to be diffrent from zero!");
        }
    }
}

void MainWindow::on_remove_button_clicked(){
    ui -> comboBox_2 -> setCurrentIndex(0);
    ui -> comboBox_3 -> setCurrentIndex(0);
    ui -> comboBox_4 -> setCurrentIndex(0);
    ui -> comboBox_5 -> setCurrentIndex(0);
    ui -> checkBox -> setCheckState(Qt::PartiallyChecked);
    ui -> checkBox_2 -> setCheckState(Qt::PartiallyChecked);
    ui -> spinBox -> setValue(0);
    ui -> spinBox_2 -> setValue(0);
    ui -> spinBox_3 -> setValue(0);
    ui -> spinBox_5 -> setValue(0);
    ui -> doubleSpinBox -> setValue(0.0);
    ui -> doubleSpinBox_2 -> setValue(0.0);

    on_search_button_clicked();
}

void MainWindow::on_login_button_clicked(){
    QString login = ui -> lineEdit -> text();
    QString password = ui -> lineEdit_2 -> text();

    std::pair<QString, QString> user_login = std::make_pair(login, password);
    Login::setUserLogin(user_login);
    Login::checkCloseness();
}


void MainWindow::on_checkBox_3_stateChanged(int arg1){
    if(arg1){
        ui -> lineEdit_2 -> setEchoMode(QLineEdit::Normal);
    }else{
        ui -> lineEdit_2 -> setEchoMode(QLineEdit::Password);
    }
}

void MainWindow::on_reset_button_clicked(){
    if(Login::getLoggedIn()){
        QWidget *new_window = new QWidget;
        new_window -> show();
    }else{
        QMessageBox::information(0, "Incorrect operation!", "You must be logged in to change password!");
    }
}

