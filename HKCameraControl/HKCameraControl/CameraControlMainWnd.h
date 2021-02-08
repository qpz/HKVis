#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_CameraControlMainWnd.h"
#include "MvCamera.h"

/*!<ÖÐÎÄ±àÂë*/
#ifdef WIN32  
#pragma execution_character_set("utf-8")  
#endif

class CameraControlMainWnd : public QMainWindow
{
	Q_OBJECT

public:
	CameraControlMainWnd(QWidget *parent = Q_NULLPTR);

private:
	Ui::CameraControlMainWndClass ui;
	MV_CC_DEVICE_INFO_LIST  m_stDevList;

private:
	void EnableControls(bool bIsCameraReady);

protected slots:
	void OnBnClickedEnumButton();

};
