#include "stdafx.h"
#include "EasyGTD.h"
#include <QtWidgets/QApplication>
#include <QTextCodec>
int main(int argc, char *argv[])
{
	QTextCodec::setCodecForLocale(QTextCodec::codecForName("UTF8"));

	QApplication a(argc, argv);
	EasyGTD w;
	w.show();
	return a.exec();
}
