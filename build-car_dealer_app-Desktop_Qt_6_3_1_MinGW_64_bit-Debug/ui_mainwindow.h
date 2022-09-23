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
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QTabWidget *tabWidget;
    QWidget *tab;
    QFrame *frame;
    QGridLayout *gridLayout_3;
    QLabel *label_7;
    QLineEdit *lineEdit;
    QPushButton *login_button;
    QLabel *label_8;
    QLineEdit *lineEdit_2;
    QPushButton *reset_button;
    QCheckBox *checkBox_3;
    QWidget *formLayoutWidget;
    QFormLayout *formLayout;
    QLabel *label_9;
    QLineEdit *lineEdit_3;
    QLabel *label_10;
    QLineEdit *lineEdit_4;
    QLabel *label_11;
    QLineEdit *lineEdit_5;
    QLabel *label_12;
    QLineEdit *lineEdit_6;
    QLabel *label_18;
    QLineEdit *lineEdit_7;
    QLabel *label_24;
    QLineEdit *lineEdit_13;
    QLabel *label_25;
    QLabel *label_26;
    QLabel *label_27;
    QLabel *label_28;
    QPushButton *pushButton_2;
    QPushButton *connect_to_databse;
    QComboBox *comboBox_6;
    QComboBox *comboBox_7;
    QComboBox *comboBox_8;
    QLineEdit *lineEdit_14;
    QTableWidget *tableWidget_2;
    QWidget *Searchcars;
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
    QPushButton *search_button;
    QWidget *widget_2;
    QGridLayout *gridLayout_2;
    QLabel *label_16;
    QLabel *label_6;
    QLabel *label_15;
    QLabel *label_13;
    QSpinBox *spinBox_3;
    QDoubleSpinBox *doubleSpinBox_2;
    QLabel *label_17;
    QSpinBox *spinBox;
    QLabel *label_14;
    QDoubleSpinBox *doubleSpinBox;
    QCheckBox *checkBox;
    QCheckBox *checkBox_2;
    QSpinBox *spinBox_2;
    QSpinBox *spinBox_5;
    QPushButton *remove_button;
    QTableWidget *tableWidget;
    QMenuBar *menubar;
    QMenu *menuFile;
    QMenu *menuTools;
    QMenu *menuHelp;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1050, 650);
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MainWindow->sizePolicy().hasHeightForWidth());
        MainWindow->setSizePolicy(sizePolicy);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        tabWidget = new QTabWidget(centralwidget);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setEnabled(true);
        tabWidget->setGeometry(QRect(0, 0, 1050, 650));
        tabWidget->setMinimumSize(QSize(1050, 650));
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        frame = new QFrame(tab);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setGeometry(QRect(390, 30, 320, 100));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        gridLayout_3 = new QGridLayout(frame);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        label_7 = new QLabel(frame);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        gridLayout_3->addWidget(label_7, 0, 0, 1, 1);

        lineEdit = new QLineEdit(frame);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));

        gridLayout_3->addWidget(lineEdit, 0, 1, 1, 1);

        login_button = new QPushButton(frame);
        login_button->setObjectName(QString::fromUtf8("login_button"));

        gridLayout_3->addWidget(login_button, 0, 2, 1, 1);

        label_8 = new QLabel(frame);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        gridLayout_3->addWidget(label_8, 1, 0, 1, 1);

        lineEdit_2 = new QLineEdit(frame);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));
        lineEdit_2->setEchoMode(QLineEdit::Password);

        gridLayout_3->addWidget(lineEdit_2, 1, 1, 1, 1);

        reset_button = new QPushButton(frame);
        reset_button->setObjectName(QString::fromUtf8("reset_button"));

        gridLayout_3->addWidget(reset_button, 1, 2, 1, 1);

        checkBox_3 = new QCheckBox(frame);
        checkBox_3->setObjectName(QString::fromUtf8("checkBox_3"));

        gridLayout_3->addWidget(checkBox_3, 2, 2, 1, 1);

        formLayoutWidget = new QWidget(tab);
        formLayoutWidget->setObjectName(QString::fromUtf8("formLayoutWidget"));
        formLayoutWidget->setGeometry(QRect(70, 190, 311, 351));
        formLayout = new QFormLayout(formLayoutWidget);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        formLayout->setContentsMargins(0, 0, 0, 0);
        label_9 = new QLabel(formLayoutWidget);
        label_9->setObjectName(QString::fromUtf8("label_9"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label_9);

        lineEdit_3 = new QLineEdit(formLayoutWidget);
        lineEdit_3->setObjectName(QString::fromUtf8("lineEdit_3"));

        formLayout->setWidget(0, QFormLayout::FieldRole, lineEdit_3);

        label_10 = new QLabel(formLayoutWidget);
        label_10->setObjectName(QString::fromUtf8("label_10"));

        formLayout->setWidget(1, QFormLayout::LabelRole, label_10);

        lineEdit_4 = new QLineEdit(formLayoutWidget);
        lineEdit_4->setObjectName(QString::fromUtf8("lineEdit_4"));

        formLayout->setWidget(1, QFormLayout::FieldRole, lineEdit_4);

        label_11 = new QLabel(formLayoutWidget);
        label_11->setObjectName(QString::fromUtf8("label_11"));

        formLayout->setWidget(2, QFormLayout::LabelRole, label_11);

        lineEdit_5 = new QLineEdit(formLayoutWidget);
        lineEdit_5->setObjectName(QString::fromUtf8("lineEdit_5"));

        formLayout->setWidget(2, QFormLayout::FieldRole, lineEdit_5);

        label_12 = new QLabel(formLayoutWidget);
        label_12->setObjectName(QString::fromUtf8("label_12"));

        formLayout->setWidget(3, QFormLayout::LabelRole, label_12);

        lineEdit_6 = new QLineEdit(formLayoutWidget);
        lineEdit_6->setObjectName(QString::fromUtf8("lineEdit_6"));

        formLayout->setWidget(3, QFormLayout::FieldRole, lineEdit_6);

        label_18 = new QLabel(formLayoutWidget);
        label_18->setObjectName(QString::fromUtf8("label_18"));

        formLayout->setWidget(4, QFormLayout::LabelRole, label_18);

        lineEdit_7 = new QLineEdit(formLayoutWidget);
        lineEdit_7->setObjectName(QString::fromUtf8("lineEdit_7"));

        formLayout->setWidget(4, QFormLayout::FieldRole, lineEdit_7);

        label_24 = new QLabel(formLayoutWidget);
        label_24->setObjectName(QString::fromUtf8("label_24"));

        formLayout->setWidget(5, QFormLayout::LabelRole, label_24);

        lineEdit_13 = new QLineEdit(formLayoutWidget);
        lineEdit_13->setObjectName(QString::fromUtf8("lineEdit_13"));

        formLayout->setWidget(5, QFormLayout::FieldRole, lineEdit_13);

        label_25 = new QLabel(formLayoutWidget);
        label_25->setObjectName(QString::fromUtf8("label_25"));

        formLayout->setWidget(6, QFormLayout::LabelRole, label_25);

        label_26 = new QLabel(formLayoutWidget);
        label_26->setObjectName(QString::fromUtf8("label_26"));

        formLayout->setWidget(7, QFormLayout::LabelRole, label_26);

        label_27 = new QLabel(formLayoutWidget);
        label_27->setObjectName(QString::fromUtf8("label_27"));

        formLayout->setWidget(8, QFormLayout::LabelRole, label_27);

        label_28 = new QLabel(formLayoutWidget);
        label_28->setObjectName(QString::fromUtf8("label_28"));

        formLayout->setWidget(9, QFormLayout::LabelRole, label_28);

        pushButton_2 = new QPushButton(formLayoutWidget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));

        formLayout->setWidget(10, QFormLayout::FieldRole, pushButton_2);

        connect_to_databse = new QPushButton(formLayoutWidget);
        connect_to_databse->setObjectName(QString::fromUtf8("connect_to_databse"));

        formLayout->setWidget(10, QFormLayout::LabelRole, connect_to_databse);

        comboBox_6 = new QComboBox(formLayoutWidget);
        comboBox_6->addItem(QString());
        comboBox_6->addItem(QString());
        comboBox_6->addItem(QString());
        comboBox_6->setObjectName(QString::fromUtf8("comboBox_6"));

        formLayout->setWidget(6, QFormLayout::FieldRole, comboBox_6);

        comboBox_7 = new QComboBox(formLayoutWidget);
        comboBox_7->addItem(QString());
        comboBox_7->addItem(QString());
        comboBox_7->addItem(QString());
        comboBox_7->setObjectName(QString::fromUtf8("comboBox_7"));

        formLayout->setWidget(7, QFormLayout::FieldRole, comboBox_7);

        comboBox_8 = new QComboBox(formLayoutWidget);
        comboBox_8->addItem(QString());
        comboBox_8->addItem(QString());
        comboBox_8->addItem(QString());
        comboBox_8->setObjectName(QString::fromUtf8("comboBox_8"));

        formLayout->setWidget(8, QFormLayout::FieldRole, comboBox_8);

        lineEdit_14 = new QLineEdit(formLayoutWidget);
        lineEdit_14->setObjectName(QString::fromUtf8("lineEdit_14"));

        formLayout->setWidget(9, QFormLayout::FieldRole, lineEdit_14);

        tableWidget_2 = new QTableWidget(tab);
        tableWidget_2->setObjectName(QString::fromUtf8("tableWidget_2"));
        tableWidget_2->setGeometry(QRect(465, 191, 561, 351));
        tabWidget->addTab(tab, QString());
        Searchcars = new QWidget();
        Searchcars->setObjectName(QString::fromUtf8("Searchcars"));
        widget = new QWidget(Searchcars);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(20, 30, 197, 162));
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

        search_button = new QPushButton(Searchcars);
        search_button->setObjectName(QString::fromUtf8("search_button"));
        search_button->setGeometry(QRect(640, 60, 91, 41));
        widget_2 = new QWidget(Searchcars);
        widget_2->setObjectName(QString::fromUtf8("widget_2"));
        widget_2->setGeometry(QRect(280, 40, 287, 133));
        gridLayout_2 = new QGridLayout(widget_2);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        label_16 = new QLabel(widget_2);
        label_16->setObjectName(QString::fromUtf8("label_16"));

        gridLayout_2->addWidget(label_16, 1, 2, 1, 1);

        label_6 = new QLabel(widget_2);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        gridLayout_2->addWidget(label_6, 0, 0, 1, 1);

        label_15 = new QLabel(widget_2);
        label_15->setObjectName(QString::fromUtf8("label_15"));

        gridLayout_2->addWidget(label_15, 0, 2, 1, 1);

        label_13 = new QLabel(widget_2);
        label_13->setObjectName(QString::fromUtf8("label_13"));

        gridLayout_2->addWidget(label_13, 1, 0, 1, 1);

        spinBox_3 = new QSpinBox(widget_2);
        spinBox_3->setObjectName(QString::fromUtf8("spinBox_3"));
        spinBox_3->setMaximum(20000000);
        spinBox_3->setSingleStep(20000);

        gridLayout_2->addWidget(spinBox_3, 0, 1, 1, 1);

        doubleSpinBox_2 = new QDoubleSpinBox(widget_2);
        doubleSpinBox_2->setObjectName(QString::fromUtf8("doubleSpinBox_2"));
        doubleSpinBox_2->setDecimals(1);
        doubleSpinBox_2->setMinimum(0.000000000000000);
        doubleSpinBox_2->setSingleStep(0.200000000000000);
        doubleSpinBox_2->setValue(0.000000000000000);

        gridLayout_2->addWidget(doubleSpinBox_2, 1, 1, 1, 1);

        label_17 = new QLabel(widget_2);
        label_17->setObjectName(QString::fromUtf8("label_17"));

        gridLayout_2->addWidget(label_17, 2, 2, 1, 1);

        spinBox = new QSpinBox(widget_2);
        spinBox->setObjectName(QString::fromUtf8("spinBox"));
        spinBox->setMaximum(20000000);
        spinBox->setSingleStep(1500);

        gridLayout_2->addWidget(spinBox, 0, 3, 1, 1);

        label_14 = new QLabel(widget_2);
        label_14->setObjectName(QString::fromUtf8("label_14"));

        gridLayout_2->addWidget(label_14, 2, 0, 1, 1);

        doubleSpinBox = new QDoubleSpinBox(widget_2);
        doubleSpinBox->setObjectName(QString::fromUtf8("doubleSpinBox"));
        doubleSpinBox->setDecimals(1);
        doubleSpinBox->setMinimum(0.000000000000000);
        doubleSpinBox->setSingleStep(0.100000000000000);
        doubleSpinBox->setValue(0.000000000000000);

        gridLayout_2->addWidget(doubleSpinBox, 1, 3, 1, 1);

        checkBox = new QCheckBox(widget_2);
        checkBox->setObjectName(QString::fromUtf8("checkBox"));
        checkBox->setChecked(false);
        checkBox->setTristate(true);

        gridLayout_2->addWidget(checkBox, 3, 0, 1, 2);

        checkBox_2 = new QCheckBox(widget_2);
        checkBox_2->setObjectName(QString::fromUtf8("checkBox_2"));
        checkBox_2->setTristate(false);

        gridLayout_2->addWidget(checkBox_2, 3, 3, 1, 1);

        spinBox_2 = new QSpinBox(widget_2);
        spinBox_2->setObjectName(QString::fromUtf8("spinBox_2"));
        spinBox_2->setMaximum(1000);
        spinBox_2->setSingleStep(10);

        gridLayout_2->addWidget(spinBox_2, 2, 3, 1, 1);

        spinBox_5 = new QSpinBox(widget_2);
        spinBox_5->setObjectName(QString::fromUtf8("spinBox_5"));
        spinBox_5->setMaximum(1000);
        spinBox_5->setSingleStep(25);

        gridLayout_2->addWidget(spinBox_5, 2, 1, 1, 1);

        remove_button = new QPushButton(Searchcars);
        remove_button->setObjectName(QString::fromUtf8("remove_button"));
        remove_button->setGeometry(QRect(640, 120, 91, 24));
        tableWidget = new QTableWidget(Searchcars);
        tableWidget->setObjectName(QString::fromUtf8("tableWidget"));
        tableWidget->setGeometry(QRect(0, 250, 1050, 331));
        tableWidget->setDragDropOverwriteMode(true);
        tabWidget->addTab(Searchcars, QString());
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 1050, 21));
        menuFile = new QMenu(menubar);
        menuFile->setObjectName(QString::fromUtf8("menuFile"));
        menuTools = new QMenu(menubar);
        menuTools->setObjectName(QString::fromUtf8("menuTools"));
        menuHelp = new QMenu(menubar);
        menuHelp->setObjectName(QString::fromUtf8("menuHelp"));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        menubar->addAction(menuFile->menuAction());
        menubar->addAction(menuTools->menuAction());
        menubar->addAction(menuHelp->menuAction());

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        label_7->setText(QCoreApplication::translate("MainWindow", "Login", nullptr));
        login_button->setText(QCoreApplication::translate("MainWindow", "Log in", nullptr));
        label_8->setText(QCoreApplication::translate("MainWindow", "Password", nullptr));
        reset_button->setText(QCoreApplication::translate("MainWindow", "Reset password", nullptr));
        checkBox_3->setText(QCoreApplication::translate("MainWindow", "Password visibility", nullptr));
        label_9->setText(QCoreApplication::translate("MainWindow", "MARK", nullptr));
        label_10->setText(QCoreApplication::translate("MainWindow", "MODEL", nullptr));
        label_11->setText(QCoreApplication::translate("MainWindow", "MILEAGE", nullptr));
        label_12->setText(QCoreApplication::translate("MainWindow", "ENGINE CAPACITY", nullptr));
        label_18->setText(QCoreApplication::translate("MainWindow", "HORSE POWER", nullptr));
        label_24->setText(QCoreApplication::translate("MainWindow", "COLOUR", nullptr));
        label_25->setText(QCoreApplication::translate("MainWindow", "AIR CONDITIONING", nullptr));
        label_26->setText(QCoreApplication::translate("MainWindow", "GPS", nullptr));
        label_27->setText(QCoreApplication::translate("MainWindow", "NUMBER OF DOORS", nullptr));
        label_28->setText(QCoreApplication::translate("MainWindow", "BODYWORK", nullptr));
        pushButton_2->setText(QCoreApplication::translate("MainWindow", "Add to database", nullptr));
        connect_to_databse->setText(QCoreApplication::translate("MainWindow", "Connect to database", nullptr));
        comboBox_6->setItemText(0, QString());
        comboBox_6->setItemText(1, QCoreApplication::translate("MainWindow", "YES", nullptr));
        comboBox_6->setItemText(2, QCoreApplication::translate("MainWindow", "NO", nullptr));

        comboBox_7->setItemText(0, QString());
        comboBox_7->setItemText(1, QCoreApplication::translate("MainWindow", "YES", nullptr));
        comboBox_7->setItemText(2, QCoreApplication::translate("MainWindow", "NO", nullptr));

        comboBox_8->setItemText(0, QString());
        comboBox_8->setItemText(1, QCoreApplication::translate("MainWindow", "3", nullptr));
        comboBox_8->setItemText(2, QCoreApplication::translate("MainWindow", "5", nullptr));

        tabWidget->setTabText(tabWidget->indexOf(tab), QCoreApplication::translate("MainWindow", "Add cars", nullptr));
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

        search_button->setText(QCoreApplication::translate("MainWindow", "SEARCH", nullptr));
        label_16->setText(QCoreApplication::translate("MainWindow", "+/-", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "Mileage", nullptr));
        label_15->setText(QCoreApplication::translate("MainWindow", "+/-", nullptr));
        label_13->setText(QCoreApplication::translate("MainWindow", "Engine capacity", nullptr));
        label_17->setText(QCoreApplication::translate("MainWindow", "+/-", nullptr));
        label_14->setText(QCoreApplication::translate("MainWindow", "Horse power", nullptr));
        checkBox->setText(QCoreApplication::translate("MainWindow", "Air conditioning", nullptr));
        checkBox_2->setText(QCoreApplication::translate("MainWindow", "GPS", nullptr));
        remove_button->setText(QCoreApplication::translate("MainWindow", "Remove filters", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(Searchcars), QCoreApplication::translate("MainWindow", "Search cars", nullptr));
        menuFile->setTitle(QCoreApplication::translate("MainWindow", "File", nullptr));
        menuTools->setTitle(QCoreApplication::translate("MainWindow", "Tools", nullptr));
        menuHelp->setTitle(QCoreApplication::translate("MainWindow", "Help", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
