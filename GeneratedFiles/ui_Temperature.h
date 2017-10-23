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
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TemperatureClass
{
public:
    QWidget *centralWidget;
    QLabel *label;
    QPushButton *pushButton;
    QTextEdit *textEdit;
    QRadioButton *radioButton;
    QRadioButton *radioButton_2;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *TemperatureClass)
    {
        if (TemperatureClass->objectName().isEmpty())
            TemperatureClass->setObjectName(QStringLiteral("TemperatureClass"));
        TemperatureClass->setWindowModality(Qt::NonModal);
        TemperatureClass->resize(437, 325);
        TemperatureClass->setCursor(QCursor(Qt::ArrowCursor));
        TemperatureClass->setContextMenuPolicy(Qt::DefaultContextMenu);
        centralWidget = new QWidget(TemperatureClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(170, 70, 161, 51));
        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(70, 30, 75, 23));
        pushButton->setCursor(QCursor(Qt::ArrowCursor));
        textEdit = new QTextEdit(centralWidget);
        textEdit->setObjectName(QStringLiteral("textEdit"));
        textEdit->setGeometry(QRect(60, 70, 101, 51));
        radioButton = new QRadioButton(centralWidget);
        radioButton->setObjectName(QStringLiteral("radioButton"));
        radioButton->setGeometry(QRect(180, 40, 82, 17));
        radioButton->setChecked(true);
        radioButton_2 = new QRadioButton(centralWidget);
        radioButton_2->setObjectName(QStringLiteral("radioButton_2"));
        radioButton_2->setGeometry(QRect(290, 40, 82, 17));
        TemperatureClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(TemperatureClass);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 437, 21));
        TemperatureClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(TemperatureClass);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        TemperatureClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(TemperatureClass);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        TemperatureClass->setStatusBar(statusBar);

        retranslateUi(TemperatureClass);
        QObject::connect(pushButton, SIGNAL(clicked()), label, SLOT(show()));

        QMetaObject::connectSlotsByName(TemperatureClass);
    } // setupUi

    void retranslateUi(QMainWindow *TemperatureClass)
    {
        TemperatureClass->setWindowTitle(QApplication::translate("TemperatureClass", "Temperature", Q_NULLPTR));
        label->setText(QString());
        pushButton->setText(QApplication::translate("TemperatureClass", "Zamien", Q_NULLPTR));
        radioButton->setText(QApplication::translate("TemperatureClass", "Kelwiny", Q_NULLPTR));
        radioButton_2->setText(QApplication::translate("TemperatureClass", "Celcjusza", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class TemperatureClass: public Ui_TemperatureClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TEMPERATURE_H
