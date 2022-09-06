/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.3.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QPushButton *search_button;
    QWidget *widget;
    QGridLayout *gridLayout;
    QLabel *label;
    QComboBox *comboBox;
    QLabel *label_3;
    QComboBox *comboBox_2;
    QLabel *label_4;
    QComboBox *comboBox_3;
    QLabel *label_5;
    QComboBox *comboBox_4;
    QLabel *label_2;
    QComboBox *comboBox_5;
    QWidget *widget_2;
    QGridLayout *gridLayout_2;
    QLabel *label_6;
    QSpinBox *spinBox_3;
    QLabel *label_15;
    QSpinBox *spinBox;
    QLabel *label_13;
    QDoubleSpinBox *doubleSpinBox_2;
    QLabel *label_16;
    QDoubleSpinBox *doubleSpinBox;
    QLabel *label_14;
    QSpinBox *spinBox_5;
    QLabel *label_17;
    QSpinBox *spinBox_2;
    QCheckBox *checkBox;
    QCheckBox *checkBox_2;
    QPushButton *remove_button;
    QTableWidget *tableWidget;
    QMenuBar *menubar;
    QStatusBar *statusbar;
    QToolBar *toolBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(986, 591);
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MainWindow->sizePolicy().hasHeightForWidth());
        MainWindow->setSizePolicy(sizePolicy);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        search_button = new QPushButton(centralwidget);
        search_button->setObjectName(QString::fromUtf8("search_button"));
        search_button->setGeometry(QRect(570, 90, 91, 41));
        widget = new QWidget(centralwidget);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(20, 20, 197, 162));
        gridLayout = new QGridLayout(widget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label = new QLabel(widget);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        comboBox = new QComboBox(widget);
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->setObjectName(QString::fromUtf8("comboBox"));
        comboBox->setMinimumSize(QSize(120, 0));

        gridLayout->addWidget(comboBox, 0, 1, 1, 1);

        label_3 = new QLabel(widget);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout->addWidget(label_3, 1, 0, 1, 1);

        comboBox_2 = new QComboBox(widget);
        comboBox_2->addItem(QString());
        comboBox_2->setObjectName(QString::fromUtf8("comboBox_2"));
        comboBox_2->setMinimumSize(QSize(120, 0));

        gridLayout->addWidget(comboBox_2, 1, 1, 1, 1);

        label_4 = new QLabel(widget);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout->addWidget(label_4, 2, 0, 1, 1);

        comboBox_3 = new QComboBox(widget);
        comboBox_3->addItem(QString());
        comboBox_3->setObjectName(QString::fromUtf8("comboBox_3"));
        comboBox_3->setMinimumSize(QSize(120, 0));

        gridLayout->addWidget(comboBox_3, 2, 1, 1, 1);

        label_5 = new QLabel(widget);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        gridLayout->addWidget(label_5, 3, 0, 1, 1);

        comboBox_4 = new QComboBox(widget);
        comboBox_4->addItem(QString());
        comboBox_4->setObjectName(QString::fromUtf8("comboBox_4"));
        comboBox_4->setMinimumSize(QSize(120, 0));

        gridLayout->addWidget(comboBox_4, 3, 1, 1, 1);

        label_2 = new QLabel(widget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 4, 0, 1, 1);

        comboBox_5 = new QComboBox(widget);
        comboBox_5->addItem(QString());
        comboBox_5->setObjectName(QString::fromUtf8("comboBox_5"));
        comboBox_5->setMinimumSize(QSize(120, 0));

        gridLayout->addWidget(comboBox_5, 4, 1, 1, 1);

        widget_2 = new QWidget(centralwidget);
        widget_2->setObjectName(QString::fromUtf8("widget_2"));
        widget_2->setGeometry(QRect(250, 20, 287, 133));
        gridLayout_2 = new QGridLayout(widget_2);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        label_6 = new QLabel(widget_2);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        gridLayout_2->addWidget(label_6, 0, 0, 1, 1);

        spinBox_3 = new QSpinBox(widget_2);
        spinBox_3->setObjectName(QString::fromUtf8("spinBox_3"));
        spinBox_3->setMaximum(20000000);
        spinBox_3->setSingleStep(20000);

        gridLayout_2->addWidget(spinBox_3, 0, 1, 1, 1);

        label_15 = new QLabel(widget_2);
        label_15->setObjectName(QString::fromUtf8("label_15"));

        gridLayout_2->addWidget(label_15, 0, 2, 1, 1);

        spinBox = new QSpinBox(widget_2);
        spinBox->setObjectName(QString::fromUtf8("spinBox"));
        spinBox->setMaximum(20000000);
        spinBox->setSingleStep(1500);

        gridLayout_2->addWidget(spinBox, 0, 3, 1, 1);

        label_13 = new QLabel(widget_2);
        label_13->setObjectName(QString::fromUtf8("label_13"));

        gridLayout_2->addWidget(label_13, 1, 0, 1, 1);

        doubleSpinBox_2 = new QDoubleSpinBox(widget_2);
        doubleSpinBox_2->setObjectName(QString::fromUtf8("doubleSpinBox_2"));
        doubleSpinBox_2->setDecimals(1);
        doubleSpinBox_2->setMinimum(0.000000000000000);
        doubleSpinBox_2->setSingleStep(0.200000000000000);
        doubleSpinBox_2->setValue(0.000000000000000);

        gridLayout_2->addWidget(doubleSpinBox_2, 1, 1, 1, 1);

        label_16 = new QLabel(widget_2);
        label_16->setObjectName(QString::fromUtf8("label_16"));

        gridLayout_2->addWidget(label_16, 1, 2, 1, 1);

        doubleSpinBox = new QDoubleSpinBox(widget_2);
        doubleSpinBox->setObjectName(QString::fromUtf8("doubleSpinBox"));
        doubleSpinBox->setDecimals(1);
        doubleSpinBox->setMinimum(0.000000000000000);
        doubleSpinBox->setSingleStep(0.100000000000000);
        doubleSpinBox->setValue(0.000000000000000);

        gridLayout_2->addWidget(doubleSpinBox, 1, 3, 1, 1);

        label_14 = new QLabel(widget_2);
        label_14->setObjectName(QString::fromUtf8("label_14"));

        gridLayout_2->addWidget(label_14, 2, 0, 1, 1);

        spinBox_5 = new QSpinBox(widget_2);
        spinBox_5->setObjectName(QString::fromUtf8("spinBox_5"));
        spinBox_5->setMaximum(1000);
        spinBox_5->setSingleStep(25);

        gridLayout_2->addWidget(spinBox_5, 2, 1, 1, 1);

        label_17 = new QLabel(widget_2);
        label_17->setObjectName(QString::fromUtf8("label_17"));

        gridLayout_2->addWidget(label_17, 2, 2, 1, 1);

        spinBox_2 = new QSpinBox(widget_2);
        spinBox_2->setObjectName(QString::fromUtf8("spinBox_2"));
        spinBox_2->setMaximum(1000);
        spinBox_2->setSingleStep(10);

        gridLayout_2->addWidget(spinBox_2, 2, 3, 1, 1);

        checkBox = new QCheckBox(widget_2);
        checkBox->setObjectName(QString::fromUtf8("checkBox"));
        checkBox->setChecked(false);
        checkBox->setTristate(true);

        gridLayout_2->addWidget(checkBox, 3, 0, 1, 2);

        checkBox_2 = new QCheckBox(widget_2);
        checkBox_2->setObjectName(QString::fromUtf8("checkBox_2"));
        checkBox_2->setTristate(false);

        gridLayout_2->addWidget(checkBox_2, 3, 3, 1, 1);

        remove_button = new QPushButton(centralwidget);
        remove_button->setObjectName(QString::fromUtf8("remove_button"));
        remove_button->setGeometry(QRect(570, 30, 91, 24));
        tableWidget = new QTableWidget(centralwidget);
        tableWidget->setObjectName(QString::fromUtf8("tableWidget"));
        tableWidget->setGeometry(QRect(0, 201, 986, 361));
        tableWidget->setDragDropOverwriteMode(true);
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 986, 21));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);
        toolBar = new QToolBar(MainWindow);
        toolBar->setObjectName(QString::fromUtf8("toolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, toolBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        search_button->setText(QCoreApplication::translate("MainWindow", "SEARCH", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Category", nullptr));
        comboBox->setItemText(0, QString());
        comboBox->setItemText(1, QCoreApplication::translate("MainWindow", "Cars", nullptr));
        comboBox->setItemText(2, QCoreApplication::translate("MainWindow", "Motorbikes", nullptr));

        label_3->setText(QCoreApplication::translate("MainWindow", "Mark", nullptr));
        comboBox_2->setItemText(0, QString());

        label_4->setText(QCoreApplication::translate("MainWindow", "Model", nullptr));
        comboBox_3->setItemText(0, QString());

        label_5->setText(QCoreApplication::translate("MainWindow", "Bodywork", nullptr));
        comboBox_4->setItemText(0, QString());

        label_2->setText(QCoreApplication::translate("MainWindow", "Colour", nullptr));
        comboBox_5->setItemText(0, QString());

        label_6->setText(QCoreApplication::translate("MainWindow", "Mileage", nullptr));
        label_15->setText(QCoreApplication::translate("MainWindow", "+/-", nullptr));
        label_13->setText(QCoreApplication::translate("MainWindow", "Engine capacity", nullptr));
        label_16->setText(QCoreApplication::translate("MainWindow", "+/-", nullptr));
        label_14->setText(QCoreApplication::translate("MainWindow", "Horse power", nullptr));
        label_17->setText(QCoreApplication::translate("MainWindow", "+/-", nullptr));
        checkBox->setText(QCoreApplication::translate("MainWindow", "Air conditioning", nullptr));
        checkBox_2->setText(QCoreApplication::translate("MainWindow", "GPS", nullptr));
        remove_button->setText(QCoreApplication::translate("MainWindow", "Remove filters", nullptr));
        toolBar->setWindowTitle(QCoreApplication::translate("MainWindow", "toolBar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
