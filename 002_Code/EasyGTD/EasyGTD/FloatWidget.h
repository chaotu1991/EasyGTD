#ifndef FloatWidget_h__
#define FloatWidget_h__


#include <QWidget>
namespace Ui { class FloatWidget; };

class FloatWidget : public QWidget
{
	Q_OBJECT
public:
	explicit FloatWidget(QWidget *parent = 0);
	~FloatWidget();
private:
	Ui::FloatWidget *ui;
	QPoint relativePos;
protected:
	//   void paintEvent(QPaintEvent*);
	void mousePressEvent(QMouseEvent *event);
	void mouseMoveEvent(QMouseEvent *event);
};
#endif // FloatWidget_h__
