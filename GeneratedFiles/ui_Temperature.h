/********************************************************************************
** Form generated from reading UI file 'Temperature.ui'
**
** Created by: Qt User Interface Compiler version 5.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TEMPERATURE_H
#define UI_TEMPERATURE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TemperatureClass
{
public:
    QWidget *centralWidget;
    QLabel *label;
    QPushButton *pushButton;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *TemperatureClass)
    {
        if (TemperatureClass->objectName().isEmpty())
            TemperatureClass->setObjectName(QStringLiteral("TemperatureClass"));
        TemperatureClass->resize(600, 400);
        centralWidget = new QWidget(TemperatureClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(156, 202, 161, 51));
        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(200, 100, 75, 23));
        TemperatureClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(TemperatureClass);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 600, 21));
        TemperatureClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(TemperatureClass);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        TemperatureClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(TemperatureClass);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        TemperatureClass->setStatusBar(statusBar);

        retranslateUi(TemperatureClass);

        QMetaObject::connectSlotsByName(TemperatureClass);
    } // setupUi

    void retranslateUi(QMainWindow *TemperatureClass)
    {
        TemperatureClass->setWindowTitle(QApplication::translate("TemperatureClass", "Temperature", Q_NULLPTR));
        label->setText(QApplication::translate("TemperatureClass", "TextLabel", Q_NULLPTR));
        pushButton->setText(QApplication::translate("TemperatureClass", "PushButton", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class TemperatureClass: public Ui_TemperatureClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TEMPERATURE_H
