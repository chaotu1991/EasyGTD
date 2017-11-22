#include "stdafx.h"
#include "FloatWidget.h"
#include "ui_FloatWidget.h"

FloatWidget::FloatWidget(QWidget *parent)
	: QWidget(parent)
{
	ui = new Ui::FloatWidget();
	ui->setupUi(this);

	this->setAttribute(Qt::WA_TranslucentBackground, true);
	QPixmap *pixw;
	pixw = new QPixmap(ui->label->size());
	pixw->fill(QColor(255, 0, 0, 150));
	ui->label->setPixmap(*pixw);
}

FloatWidget::~FloatWidget()
{
	delete ui;
}

void FloatWidget::mousePressEvent(QMouseEvent *event)
{
	if (event->button() == Qt::LeftButton) {//左键拖动窗体
		relativePos = this->pos() - event->globalPos();
	}
	if (event->button() == Qt::MidButton) {//中键关闭窗体
		this->close();
	}
	if (event->button() == Qt::RightButton) {//右键打开网址或文件
		QDesktopServices::openUrl(QUrl("file:///C:/windows", QUrl::TolerantMode));
		//  QDesktopServices::openUrl(QUrl("http://www.baidu.com"));
	}
}

void FloatWidget::mouseMoveEvent(QMouseEvent *event)
{
	this->move(event->globalPos() + relativePos);
}
