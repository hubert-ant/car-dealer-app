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

#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QtSql>
#include <QSqlDatabase>
#include <QMessageBox>
#include <QStringList>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:

    void on_search_button_clicked();

    void on_comboBox_currentTextChanged(const QString &arg1);

    QSqlDatabase read_database(const QString &database_name);

    void on_comboBox_2_currentTextChanged(const QString &arg1);

    void on_spinBox_valueChanged(int arg1);

    void on_doubleSpinBox_valueChanged(double arg1);

    void on_spinBox_2_valueChanged(int arg1);

    void on_remove_button_clicked();

    void on_login_button_clicked();

    void on_checkBox_3_stateChanged(int arg1);

    void on_reset_button_clicked();

    void on_connect_to_databse_clicked();

    void on_pushButton_2_clicked();

private:
    QSqlDatabase db;
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
