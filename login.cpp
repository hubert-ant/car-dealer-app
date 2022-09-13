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

#include "login.h"
#include <QFile>
#include <QApplication>
#include <QMessageBox>

bool Login::is_logged_in_ = false;
std::pair<QString, QString> Login::login_;
std::pair<QString, QString> Login::user_login_;

void Login::setLoggedIn(bool logged_in){
    is_logged_in_ = logged_in;
}

bool Login::getLoggedIn(){
    return is_logged_in_;
}

void Login::setUserLogin(std::pair<QString, QString> &login){
    user_login_ = login;
}

std::pair<QString, QString> Login::getLogin(){
    return login_;
}

void Login::readLogin(){
    QVector<QString> login_parameters;
    QFile file("login.txt");

    if(!file.open(QIODevice::ReadOnly)) {
        QMessageBox::information(0, "Error reading file!", file.errorString());
    }
    QTextStream read(&file);

    while(!read.atEnd()) {
        QString new_line = read.readLine();
        login_parameters.emplace_back(new_line);
    }
    std::pair<QString, QString> login = std::make_pair(login_parameters[0], login_parameters[1]);
    login_ = login;

    login_parameters.clear();
    file.close();
}

void Login::checkCloseness(){
    if((login_.first == user_login_.first) && (login_.second == user_login_.second)){
        Login::setLoggedIn(true);
        QMessageBox::information(0, "Correct!", "Succesfully logged in!");
    }else{
        Login::setLoggedIn(false);
        QMessageBox::information(0, "Error logging in", "Incorrect login or password!");
    }
}

