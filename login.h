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

#ifndef LOGIN_H
#define LOGIN_H

#include <QApplication>

class Login{
private:
    static std::pair<QString, QString> login_, user_login_;
    static bool is_logged_in_;
public:
    Login(){}
    ~Login(){}
    static void setLoggedIn(bool logged_in);
    static bool getLoggedIn();
    static std::pair<QString, QString> getLogin();
    static void readLogin();
    static void setUserLogin(std::pair<QString, QString> &login);
    static void checkCloseness();
};

#endif // LOGIN_H
