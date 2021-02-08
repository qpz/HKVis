/********************************************************************************
** Form generated from reading UI file 'CameraControlMainWnd.ui'
**
** Created by: Qt User Interface Compiler version 5.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CAMERACONTROLMAINWND_H
#define UI_CAMERACONTROLMAINWND_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CameraControlMainWndClass
{
public:
    QWidget *centralWidget;
    QHBoxLayout *horizontalLayout;
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QComboBox *m_ctrlDeviceCombo;
    QLabel *label;
    QWidget *widget_2;
    QVBoxLayout *verticalLayout_2;
    QWidget *widget_3;
    QGridLayout *gridLayout;
    QPushButton *m_findDeviceBtn;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QWidget *widget_4;
    QGridLayout *gridLayout_2;
    QRadioButton *radioButton;
    QRadioButton *radioButton_2;
    QPushButton *pushButton_4;
    QPushButton *pushButton_5;
    QCheckBox *checkBox;
    QPushButton *pushButton_6;
    QWidget *widget_5;
    QGridLayout *gridLayout_3;
    QPushButton *pushButton_7;
    QPushButton *pushButton_8;
    QPushButton *pushButton_9;
    QPushButton *pushButton_10;
    QWidget *widget_6;
    QGridLayout *gridLayout_4;
    QLabel *label_2;
    QLineEdit *lineEdit;
    QLabel *label_3;
    QLabel *label_4;
    QLineEdit *lineEdit_2;
    QLineEdit *lineEdit_3;
    QPushButton *pushButton_11;
    QPushButton *pushButton_12;

    void setupUi(QMainWindow *CameraControlMainWndClass)
    {
        if (CameraControlMainWndClass->objectName().isEmpty())
            CameraControlMainWndClass->setObjectName(QStringLiteral("CameraControlMainWndClass"));
        CameraControlMainWndClass->resize(767, 500);
        centralWidget = new QWidget(CameraControlMainWndClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        horizontalLayout = new QHBoxLayout(centralWidget);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        widget = new QWidget(centralWidget);
        widget->setObjectName(QStringLiteral("widget"));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        m_ctrlDeviceCombo = new QComboBox(widget);
        m_ctrlDeviceCombo->setObjectName(QStringLiteral("m_ctrlDeviceCombo"));

        verticalLayout->addWidget(m_ctrlDeviceCombo);

        label = new QLabel(widget);
        label->setObjectName(QStringLiteral("label"));
        label->setStyleSheet(QStringLiteral("border:1px solid black;"));

        verticalLayout->addWidget(label);


        horizontalLayout->addWidget(widget);

        widget_2 = new QWidget(centralWidget);
        widget_2->setObjectName(QStringLiteral("widget_2"));
        widget_2->setMaximumSize(QSize(200, 16777215));
        verticalLayout_2 = new QVBoxLayout(widget_2);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        widget_3 = new QWidget(widget_2);
        widget_3->setObjectName(QStringLiteral("widget_3"));
        gridLayout = new QGridLayout(widget_3);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        m_findDeviceBtn = new QPushButton(widget_3);
        m_findDeviceBtn->setObjectName(QStringLiteral("m_findDeviceBtn"));

        gridLayout->addWidget(m_findDeviceBtn, 0, 0, 1, 2);

        pushButton_2 = new QPushButton(widget_3);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));

        gridLayout->addWidget(pushButton_2, 1, 0, 1, 1);

        pushButton_3 = new QPushButton(widget_3);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));

        gridLayout->addWidget(pushButton_3, 1, 1, 1, 1);


        verticalLayout_2->addWidget(widget_3);

        widget_4 = new QWidget(widget_2);
        widget_4->setObjectName(QStringLiteral("widget_4"));
        gridLayout_2 = new QGridLayout(widget_4);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        radioButton = new QRadioButton(widget_4);
        radioButton->setObjectName(QStringLiteral("radioButton"));

        gridLayout_2->addWidget(radioButton, 0, 0, 1, 2);

        radioButton_2 = new QRadioButton(widget_4);
        radioButton_2->setObjectName(QStringLiteral("radioButton_2"));

        gridLayout_2->addWidget(radioButton_2, 0, 2, 1, 1);

        pushButton_4 = new QPushButton(widget_4);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));

        gridLayout_2->addWidget(pushButton_4, 1, 0, 1, 1);

        pushButton_5 = new QPushButton(widget_4);
        pushButton_5->setObjectName(QStringLiteral("pushButton_5"));

        gridLayout_2->addWidget(pushButton_5, 1, 1, 1, 2);

        checkBox = new QCheckBox(widget_4);
        checkBox->setObjectName(QStringLiteral("checkBox"));

        gridLayout_2->addWidget(checkBox, 2, 0, 1, 1);

        pushButton_6 = new QPushButton(widget_4);
        pushButton_6->setObjectName(QStringLiteral("pushButton_6"));

        gridLayout_2->addWidget(pushButton_6, 2, 1, 1, 2);


        verticalLayout_2->addWidget(widget_4);

        widget_5 = new QWidget(widget_2);
        widget_5->setObjectName(QStringLiteral("widget_5"));
        gridLayout_3 = new QGridLayout(widget_5);
        gridLayout_3->setSpacing(6);
        gridLayout_3->setContentsMargins(11, 11, 11, 11);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        pushButton_7 = new QPushButton(widget_5);
        pushButton_7->setObjectName(QStringLiteral("pushButton_7"));

        gridLayout_3->addWidget(pushButton_7, 0, 0, 1, 1);

        pushButton_8 = new QPushButton(widget_5);
        pushButton_8->setObjectName(QStringLiteral("pushButton_8"));

        gridLayout_3->addWidget(pushButton_8, 0, 1, 1, 1);

        pushButton_9 = new QPushButton(widget_5);
        pushButton_9->setObjectName(QStringLiteral("pushButton_9"));

        gridLayout_3->addWidget(pushButton_9, 1, 0, 1, 1);

        pushButton_10 = new QPushButton(widget_5);
        pushButton_10->setObjectName(QStringLiteral("pushButton_10"));

        gridLayout_3->addWidget(pushButton_10, 1, 1, 1, 1);


        verticalLayout_2->addWidget(widget_5);

        widget_6 = new QWidget(widget_2);
        widget_6->setObjectName(QStringLiteral("widget_6"));
        gridLayout_4 = new QGridLayout(widget_6);
        gridLayout_4->setSpacing(6);
        gridLayout_4->setContentsMargins(11, 11, 11, 11);
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        label_2 = new QLabel(widget_6);
        label_2->setObjectName(QStringLiteral("label_2"));

        gridLayout_4->addWidget(label_2, 0, 0, 1, 1);

        lineEdit = new QLineEdit(widget_6);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));

        gridLayout_4->addWidget(lineEdit, 0, 1, 2, 1);

        label_3 = new QLabel(widget_6);
        label_3->setObjectName(QStringLiteral("label_3"));

        gridLayout_4->addWidget(label_3, 1, 0, 1, 1);

        label_4 = new QLabel(widget_6);
        label_4->setObjectName(QStringLiteral("label_4"));

        gridLayout_4->addWidget(label_4, 2, 0, 2, 1);

        lineEdit_2 = new QLineEdit(widget_6);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));

        gridLayout_4->addWidget(lineEdit_2, 2, 1, 1, 1);

        lineEdit_3 = new QLineEdit(widget_6);
        lineEdit_3->setObjectName(QStringLiteral("lineEdit_3"));

        gridLayout_4->addWidget(lineEdit_3, 3, 1, 2, 1);

        pushButton_11 = new QPushButton(widget_6);
        pushButton_11->setObjectName(QStringLiteral("pushButton_11"));

        gridLayout_4->addWidget(pushButton_11, 4, 0, 2, 1);

        pushButton_12 = new QPushButton(widget_6);
        pushButton_12->setObjectName(QStringLiteral("pushButton_12"));

        gridLayout_4->addWidget(pushButton_12, 5, 1, 1, 1);


        verticalLayout_2->addWidget(widget_6);


        horizontalLayout->addWidget(widget_2);

        CameraControlMainWndClass->setCentralWidget(centralWidget);

        retranslateUi(CameraControlMainWndClass);

        QMetaObject::connectSlotsByName(CameraControlMainWndClass);
    } // setupUi

    void retranslateUi(QMainWindow *CameraControlMainWndClass)
    {
        CameraControlMainWndClass->setWindowTitle(QApplication::translate("CameraControlMainWndClass", "CameraControlMainWnd", Q_NULLPTR));
        label->setText(QString());
        m_findDeviceBtn->setText(QApplication::translate("CameraControlMainWndClass", "\346\237\245\346\211\276\350\256\276\345\244\207", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("CameraControlMainWndClass", "PushButton", Q_NULLPTR));
        pushButton_3->setText(QApplication::translate("CameraControlMainWndClass", "PushButton", Q_NULLPTR));
        radioButton->setText(QApplication::translate("CameraControlMainWndClass", "RadioButton", Q_NULLPTR));
        radioButton_2->setText(QApplication::translate("CameraControlMainWndClass", "RadioButton", Q_NULLPTR));
        pushButton_4->setText(QApplication::translate("CameraControlMainWndClass", "PushButton", Q_NULLPTR));
        pushButton_5->setText(QApplication::translate("CameraControlMainWndClass", "PushButton", Q_NULLPTR));
        checkBox->setText(QApplication::translate("CameraControlMainWndClass", "CheckBox", Q_NULLPTR));
        pushButton_6->setText(QApplication::translate("CameraControlMainWndClass", "PushButton", Q_NULLPTR));
        pushButton_7->setText(QApplication::translate("CameraControlMainWndClass", "PushButton", Q_NULLPTR));
        pushButton_8->setText(QApplication::translate("CameraControlMainWndClass", "PushButton", Q_NULLPTR));
        pushButton_9->setText(QApplication::translate("CameraControlMainWndClass", "PushButton", Q_NULLPTR));
        pushButton_10->setText(QApplication::translate("CameraControlMainWndClass", "PushButton", Q_NULLPTR));
        label_2->setText(QApplication::translate("CameraControlMainWndClass", "TextLabel", Q_NULLPTR));
        label_3->setText(QApplication::translate("CameraControlMainWndClass", "TextLabel", Q_NULLPTR));
        label_4->setText(QApplication::translate("CameraControlMainWndClass", "TextLabel", Q_NULLPTR));
        pushButton_11->setText(QApplication::translate("CameraControlMainWndClass", "PushButton", Q_NULLPTR));
        pushButton_12->setText(QApplication::translate("CameraControlMainWndClass", "PushButton", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class CameraControlMainWndClass: public Ui_CameraControlMainWndClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CAMERACONTROLMAINWND_H
