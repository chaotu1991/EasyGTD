#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_EasyGTD.h"

class EasyGTD : public QMainWindow
{
	Q_OBJECT

public:
	EasyGTD(QWidget *parent = Q_NULLPTR);

private:
	Ui::EasyGTDClass ui;
};
