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
	if (event->button() == Qt::LeftButton) {//����϶�����
		relativePos = this->pos() - event->globalPos();
	}
	if (event->button() == Qt::MidButton) {//�м��رմ���
		this->close();
	}
	if (event->button() == Qt::RightButton) {//�Ҽ�����ַ���ļ�
		QDesktopServices::openUrl(QUrl("file:///C:/windows", QUrl::TolerantMode));
		//  QDesktopServices::openUrl(QUrl("http://www.baidu.com"));
	}
}

void FloatWidget::mouseMoveEvent(QMouseEvent *event)
{
	this->move(event->globalPos() + relativePos);
}
