#include <string>
#include "qprojectm_mainwindow.hpp"
#include <QtWidgets/QApplication>
#include <QMutex>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	QMutex * audio_mutex = new QMutex();

	QProjectM_MainWindow w(std::string(""), audio_mutex);
	w.show();
	return a.exec();
}
