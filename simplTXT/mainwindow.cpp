#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
	QMainWindow(parent),
	ui(new Ui::MainWindow)
{
	ui->setupUi(this);

	hovudtext = new QTextEdit(this);
	hovudtext->resize(600, 800);
	hovudtext->setText(" ");

	kommando_vindauge = new QTextEdit(this);
	kommando_vindauge->resize(600, 800);
	kommando_vindauge->setText("");
	kommando_vindauge->move(600, 0);

	lagre = new QPushButton("lagre", this);
	lagre->resize(200, 30);
	lagre->move(0, 800);

	dir = new QPushButton("dir", this);
	dir->resize(200, 30);
	dir->move(600, 800);


	opne = new QPushButton("opne", this);
	opne->move(0,840);
	opne->resize(200, 30);

	opne_fil_namn = new QLineEdit("", this);
	opne_fil_namn->resize(200,30);
	opne_fil_namn->move(200, 840);

	lagre_fil_namn = new QLineEdit("", this);
	lagre_fil_namn->resize(200, 30);
	lagre_fil_namn->move(200,800);

	lagreVindauge = new QWindow();


	QObject::connect(lagre, SIGNAL (released()), this, SLOT(lagre_fil()));
	QObject::connect(lagre_fil_namn, SIGNAL (returnPressed()), this, SLOT(lagre_fil()));
	QObject::connect(opne, SIGNAL (released()), this, SLOT (opne_fil()));
	QObject::connect(opne_fil_namn, SIGNAL (returnPressed()), this, SLOT(opne_fil()));

	QObject::connect(dir, SIGNAL (released()), this, SLOT(print_dir()));
}


MainWindow::~MainWindow()
{
	delete ui;
}

//sete skriveområdet til inputfila sitt innhald
void MainWindow::settxt(const std::string input_fil_txt)
{
	hovudtext->setText(QString::fromStdString(input_fil_txt));
}

void MainWindow::lagre_fil()
{
	lagreVindauge->show();
	std::ofstream skriv_fil{lagre_fil_namn->text().toStdString()};

	skriv_fil << hovudtext->toPlainText().toStdString();

}

void MainWindow::opne_fil()
{
	hovudtext->setText("");

	std::ifstream opne_fil{opne_fil_namn->text().toStdString()};

	if(!opne_fil)
		kommando_vindauge->setText("fekk ikkje opne fil, trykk dired for å sjå moglege filer");

	char c;

	QString input = "";

	while (opne_fil.get(c))
	{
		input += c;
	}
	std::cout << input.toStdString();
	hovudtext->setText(input);
}

void MainWindow::print_dir()
{
	struct dirent * entry;

	QString dir_content;

	auto a = opendir(".");
	if(a == nullptr)
		std::cerr << "fekk ikkje opna mappe" << std::endl;

	while((entry = readdir(a)))
	{

		dir_content += entry->d_name;
		dir_content += "\n";
	}

	kommando_vindauge->setText(dir_content);

}
