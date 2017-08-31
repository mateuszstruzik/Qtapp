#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_chess.h"
#include "qlabel.h"
#include "qpushbutton.h"

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
	QLabel *label = new QLabel(this);
	
	

public:
	void labeldraw();
	void probny_button();
	void on_probnybutton_clicked();
};

