/********************************************************************************
** Form generated from reading UI file 'FloatWidget.ui'
**
** Created by: Qt User Interface Compiler version 5.9.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FLOATWIDGET_H
#define UI_FLOATWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_FloatWidget
{
public:
    QGridLayout *gridLayout;
    QLabel *label;

    void setupUi(QWidget *FloatWidget)
    {
        if (FloatWidget->objectName().isEmpty())
            FloatWidget->setObjectName(QStringLiteral("FloatWidget"));
        FloatWidget->resize(94, 30);
        gridLayout = new QGridLayout(FloatWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        label = new QLabel(FloatWidget);
        label->setObjectName(QStringLiteral("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);


        retranslateUi(FloatWidget);

        QMetaObject::connectSlotsByName(FloatWidget);
    } // setupUi

    void retranslateUi(QWidget *FloatWidget)
    {
        FloatWidget->setWindowTitle(QApplication::translate("FloatWidget", "FloatWidget", Q_NULLPTR));
        label->setText(QApplication::translate("FloatWidget", "12323", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class FloatWidget: public Ui_FloatWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FLOATWIDGET_H
