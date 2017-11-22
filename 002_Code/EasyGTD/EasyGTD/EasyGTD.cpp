#include "stdafx.h"
#include "EasyGTD.h"
#include "FloatWidget.h"
void EasyGTD::closeEvent(QCloseEvent *event)
{
#ifdef Q_OS_OSX
	if (!event->spontaneous() || !isVisible()) {
		return;
	}
#endif
	if (_trayIcon->isVisible()) {
		QMessageBox::information(this, tr("Systray"),
			tr("The program will keep running in the "
				"system tray. To terminate the program, "
				"choose <b>Quit</b> in the context menu "
				"of the system tray entry."));
		hide();
		event->ignore();
	}
}

void EasyGTD::iconActivated(QSystemTrayIcon::ActivationReason reason)
{
	switch (reason) {
	case QSystemTrayIcon::Trigger:
		show();
	case QSystemTrayIcon::DoubleClick:
		//iconComboBox->setCurrentIndex((iconComboBox->currentIndex() + 1) % iconComboBox->count());
		break;
	case QSystemTrayIcon::MiddleClick:
		//showMessage();
		break;
	default:
		;
	}
}

void EasyGTD::messageClicked()
{
	QMessageBox::information(0, tr("Systray"),
		tr("Sorry, I already gave what help I could.\n"
			"Maybe you should try asking a human?"));
}

EasyGTD::EasyGTD(QWidget *parent)
	: QMainWindow(parent)
{
	ui = new Ui::EasyGTDClass();
	ui->setupUi(this);

	createTrayIcon();
	connect(_trayIcon, &QSystemTrayIcon::messageClicked, this, &EasyGTD::messageClicked);
	connect(_trayIcon, &QSystemTrayIcon::activated, this, &EasyGTD::iconActivated);
	_trayIcon->show();

	FloatWidget * widget = new FloatWidget(NULL/*this*/);
	widget->show();
}

void EasyGTD::createTrayIcon()
{
	QMenu * menu;
	menu = new QMenu(this);
	menu->setIcon(QIcon("C:/Users/tusup/source/repos/EasyGTD/002_Code/EasyGTD/EasyGTD/Resources/icons848.png"));
	QAction * action = new QAction(QStringLiteral("ÌבÊ¾"),this);
	action->setIcon(QIcon("C:/Users/tusup/source/repos/EasyGTD/002_Code/EasyGTD/EasyGTD/Resources/icons848.png"));
	menu->addAction(action);
	//_trayIcon->addAction(maximizeAction);
	//_trayIcon->addAction(restoreAction);
	//_trayIcon->addSeparator();
	//_trayIcon->addAction(quitAction);

	_trayIcon = new QSystemTrayIcon(this);
	_trayIcon->setContextMenu(menu);
	_trayIcon->setIcon(QIcon("C:/Users/tusup/source/repos/EasyGTD/002_Code/EasyGTD/EasyGTD/Resources/icons848.png"));
}
