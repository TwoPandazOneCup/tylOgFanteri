#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <qwindow.h>
#include <QTextEdit>
#include <QLineEdit>
#include <QPushButton>
#include <string>
#include <fstream>
#include <iostream>
#include <dirent.h>
#include <sys/types.h>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
	Q_OBJECT

public:
	explicit MainWindow(QWidget *parent = 0);
	~MainWindow();
	void settxt(std::string inputval);

private slots:
	void lagre_fil();
	void opne_fil();

	void print_dir();

private:
	Ui::MainWindow *ui;

	QPushButton *lagre;
	QPushButton *opne;
	QPushButton *dir;
	QWindow *lagreVindauge;
	QTextEdit *hovudtext;
	QTextEdit *kommando_vindauge;
	QLineEdit *lagre_fil_namn;
	QLineEdit *opne_fil_namn;




};

#endif // MAINWINDOW_H
