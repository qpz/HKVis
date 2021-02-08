#include "CameraControlMainWnd.h"
#include <QPushButton>
#include <QMessageBox>
#include <QString>

CameraControlMainWnd::CameraControlMainWnd(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);
	connect(ui.m_findDeviceBtn, SIGNAL(clicked()), this, SLOT(OnBnClickedEnumButton()));
}


void CameraControlMainWnd::EnableControls(bool bIsCameraReady)
{

}

void CameraControlMainWnd::OnBnClickedEnumButton()
{
	QString strMsg;
	ui.m_ctrlDeviceCombo->clear();
	memset(&m_stDevList, 0, sizeof(MV_CC_DEVICE_INFO_LIST));

	// ch:枚举子网内所有设备 | en:Enumerate all devices within subnet
	int nRet = CMvCamera::EnumDevices(MV_GIGE_DEVICE | MV_USB_DEVICE, &m_stDevList);
	if (MV_OK != nRet)
	{
		return;
	}


	// ch:将值加入到信息列表框中并显示出来 | en:Add value to the information list box and display
	for (unsigned int i = 0; i < m_stDevList.nDeviceNum; i++)
	{
		MV_CC_DEVICE_INFO* pDeviceInfo = m_stDevList.pDeviceInfo[i];
		if (NULL == pDeviceInfo)
		{
			continue;
		}

		wchar_t* pUserName = NULL;
		if (pDeviceInfo->nTLayerType == MV_GIGE_DEVICE)
		{
			int nIp1 = ((m_stDevList.pDeviceInfo[i]->SpecialInfo.stGigEInfo.nCurrentIp & 0xff000000) >> 24);
			int nIp2 = ((m_stDevList.pDeviceInfo[i]->SpecialInfo.stGigEInfo.nCurrentIp & 0x00ff0000) >> 16);
			int nIp3 = ((m_stDevList.pDeviceInfo[i]->SpecialInfo.stGigEInfo.nCurrentIp & 0x0000ff00) >> 8);
			int nIp4 = (m_stDevList.pDeviceInfo[i]->SpecialInfo.stGigEInfo.nCurrentIp & 0x000000ff);

			if (strcmp("",(char *)(pDeviceInfo->SpecialInfo.stGigEInfo.chUserDefinedName)) != 0)
			{
// 				DWORD dwLenUserName = MultiByteToWideChar(CP_ACP, 0, (char *)(pDeviceInfo->SpecialInfo.stGigEInfo.chUserDefinedName), -1, NULL, 0);
// 				pUserName = new wchar_t[dwLenUserName];
// 				MultiByteToWideChar(CP_ACP, 0, (LPCSTR)(pDeviceInfo->SpecialInfo.stGigEInfo.chUserDefinedName), -1, pUserName, dwLenUserName);
			}
			else
			{
// 				char strUserName[256] = { 0 };
// 				sprintf_s(strUserName, 256, "%s %s (%s)", pDeviceInfo->SpecialInfo.stGigEInfo.chManufacturerName,
// 					pDeviceInfo->SpecialInfo.stGigEInfo.chModelName,
// 					pDeviceInfo->SpecialInfo.stGigEInfo.chSerialNumber);
// 				DWORD dwLenUserName = MultiByteToWideChar(CP_ACP, 0, (LPCSTR)(strUserName), -1, NULL, 0);
// 				pUserName = new wchar_t[dwLenUserName];
// 				MultiByteToWideChar(CP_ACP, 0, (LPCSTR)(strUserName), -1, pUserName, dwLenUserName);
			}
			strMsg = QString("[%d]GigE:    %s  (%d.%d.%d.%d)").arg(i).arg(pUserName).arg(nIp1).arg(nIp2).arg(nIp3).arg(nIp4);
		}
		else if (pDeviceInfo->nTLayerType == MV_USB_DEVICE)
		{
			if (strcmp("", (char*)pDeviceInfo->SpecialInfo.stUsb3VInfo.chUserDefinedName) != 0)
			{
// 				DWORD dwLenUserName = MultiByteToWideChar(CP_ACP, 0, (LPCSTR)(pDeviceInfo->SpecialInfo.stUsb3VInfo.chUserDefinedName), -1, NULL, 0);
// 				pUserName = new wchar_t[dwLenUserName];
// 				MultiByteToWideChar(CP_ACP, 0, (LPCSTR)(pDeviceInfo->SpecialInfo.stUsb3VInfo.chUserDefinedName), -1, pUserName, dwLenUserName);
			}
			else
			{
// 				char strUserName[256] = { 0 };
// 				sprintf_s(strUserName, 256, "%s %s (%s)", pDeviceInfo->SpecialInfo.stUsb3VInfo.chManufacturerName,
// 					pDeviceInfo->SpecialInfo.stUsb3VInfo.chModelName,
// 					pDeviceInfo->SpecialInfo.stUsb3VInfo.chSerialNumber);
// 				DWORD dwLenUserName = MultiByteToWideChar(CP_ACP, 0, (LPCSTR)(strUserName), -1, NULL, 0);
// 				pUserName = new wchar_t[dwLenUserName];
// 				MultiByteToWideChar(CP_ACP, 0, (LPCSTR)(strUserName), -1, pUserName, dwLenUserName);
			}
//			strMsg.Format(_T("[%d]UsbV3:  %s"), i, pUserName);
		}
		else
		{
//			ShowErrorMsg(TEXT("Unknown device enumerated"), 0);
		}
		ui.m_ctrlDeviceCombo->addItem(strMsg);

		if (pUserName)
		{
			delete[] pUserName;
			pUserName = NULL;
		}
	}

	if (0 == m_stDevList.nDeviceNum)
	{

		QMessageBox::warning(NULL, tr("提示"), tr("无设备"));
		return;
	}


	EnableControls(true);
}
