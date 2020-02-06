#include <QtWidgets>
#include <iostream>
#include "testwidget.h"

int main(int argc, char* argv[])
{
	QApplication a(argc, argv);
	a.setWindowIcon(QIcon("./home_icon.png"));


	testwidget w;
	w.setGeometry(100, 100, 1080, 640);
	w.show();

	return a.exec();
}
