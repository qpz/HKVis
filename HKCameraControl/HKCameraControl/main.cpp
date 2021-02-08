#include "CameraControlMainWnd.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	CameraControlMainWnd w;
	w.show();
	return a.exec();
}
