#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_Temperature.h"

class Temperature : public QMainWindow
{
	Q_OBJECT

public:
	Temperature(QWidget *parent = Q_NULLPTR);

private:
	Ui::TemperatureClass ui;
};
