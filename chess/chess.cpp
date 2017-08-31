#include "chess.h"


chess::chess(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);
	labeldraw();
	on_probnybutton_clicked();

	
	
	

}

void chess::on_pushButton_clicked()
{
	label->setText("chyba dziala");
	
	
}


void chess::labeldraw()
{
	label->setFrameStyle(QFrame::Panel);
	label->setText("probna labelka");
	label->setGeometry(100, 100, 30, 80);

}

void chess::probny_button()
{
	
	QApplication::quit();
}

void chess::on_probnybutton_clicked()
{
	QPushButton *probny = new QPushButton("&Probny", this);
	probny->setGeometry(300, 300, 50, 50);
	connect(probny, &QPushButton::clicked, this, &chess::probny_button);
}
