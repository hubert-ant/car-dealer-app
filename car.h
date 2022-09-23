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

#ifndef CAR_H
#define CAR_H

#include "qtablewidget.h"
#include <QApplication>
#include <QtSql>
#include <QSqlDatabase>

class Car{
private:
    std::pair<bool, bool> gps_, air_conditioning_;
    int id_, mileage_, doors_;
    QString mark_, model_, colour_, bodywork_;
    float engine_capacity_, hp_;
    bool  visibility_;
    static int mileage_filter_range_;
    static float engine_cap_filter_range_, hp_filter_range_;
    static QVector <Car*> cars_vector_;
public:
    Car();
    ~Car(){}
    void setID(int id);
    void setMark(const QString &mark);
    void setModel(const QString &model);
    void setMileage(int mileage);
    void setEngineCap(float engine_capacity);
    void setHP(float hp);
    void setColour(const QString &colour);
    void setAirCond(std::pair<bool, bool> air_conditioning);
    void setGPS(std::pair<bool, bool> gps);
    void setDoors(int doors);
    void setBodywork(const QString &bodywork);
    void emplaceToVector();
    QString getMark();
    QString getModel();
    QString getColour();
    QString getBodywork();
    static QVector <Car*> getVector();
    static void setMileageRange(int mileage);
    static void setEngineCapRange(float eng_cap);
    static void setHpRange(float hp);
    static void clearVector();
    static void check_filters(Car *car);
    static void display(QTableWidget *table);
    static void fillVector(QSqlDatabase &db);
    bool operator==(const Car &car)const;
};

#endif // CAR_H
