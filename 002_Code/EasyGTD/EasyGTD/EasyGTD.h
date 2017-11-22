#ifndef EasyGTD_h__
#define EasyGTD_h__



#include <QtWidgets/QMainWindow>
#include "ui_EasyGTD.h"

class EasyGTD : public QMainWindow
{
	Q_OBJECT
protected:
	void closeEvent(QCloseEvent *event) override;

private slots:

	////////////////////////////////////////////////////////////////////////////////////////////////////
	/// <summary>	Icon activated. </summary>
	///
	/// <remarks>	Tusup, 2017/11/22. </remarks>
	///
	/// <param name="reason">	The reason. </param>
	////////////////////////////////////////////////////////////////////////////////////////////////////

	void iconActivated(QSystemTrayIcon::ActivationReason reason);

	////////////////////////////////////////////////////////////////////////////////////////////////////
	/// <summary>	Message clicked. </summary>
	///
	/// <remarks>	Tusup, 2017/11/22. </remarks>
	////////////////////////////////////////////////////////////////////////////////////////////////////

	void messageClicked();

public:
	EasyGTD(QWidget *parent = Q_NULLPTR);

	void createTrayIcon();

private:
	QPointer<QSystemTrayIcon> _trayIcon;
	Ui::EasyGTDClass *ui;
};
#endif // EasyGTD_h__
