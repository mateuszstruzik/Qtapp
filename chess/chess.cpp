#include "chess.h"


chess::chess(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);
	labeldraw(label1,100,100,100,100);
	labeldraw(label2,200, 100, 100, 100);
	labeldraw(label3, 300, 100, 100, 100);
	on_probnybutton_clicked();
	on_labelccc_clicked();

	
	
	

}

void chess::on_pushButton_clicked()
{
	label1->setText("chyba dziala");
	
	
}


void chess::labeldraw(QLabel *label,int xpos,int ypos, int xshape, int yshape)
{
	label->setFrameStyle(QFrame::Panel);
	label->setText("probna labelka");
	label->setGeometry(xpos, ypos, xshape, yshape);

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

void chess::on_labelccc_clicked(QMouseEvent *e)
{
	if (e->buttons() == Qt::LeftButton)
	{
		label1->setText("X");
	}
}
