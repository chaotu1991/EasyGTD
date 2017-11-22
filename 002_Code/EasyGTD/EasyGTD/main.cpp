#include "stdafx.h"
#include "EasyGTD.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	EasyGTD w;
	w.show();
	return a.exec();
}
