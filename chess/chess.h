#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_chess.h"
#include "qlabel.h"
#include "qpushbutton.h"
#include <QMouseEvent>

class chess : public QMainWindow
{
	Q_OBJECT

public:
	chess(QWidget *parent = Q_NULLPTR);

	private slots:
	void on_pushButton_clicked();
	//void on_probny_clicked();

private:
	Ui::chessClass ui;
	QLabel *label1 = new QLabel(this);
	QLabel *label2 = new QLabel(this);
	QLabel *label3 = new QLabel(this);
	
	

public:
	void labeldraw(QLabel *label,int xpos, int ypos, int xshape, int yshape);
	void probny_button();
	void on_probnybutton_clicked();
	void on_labelccc_clicked(QMouseEvent *e);

};

