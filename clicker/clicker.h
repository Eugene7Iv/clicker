#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_clicker.h"

class clicker : public QMainWindow
{
    Q_OBJECT

public:
    clicker(QWidget *parent = Q_NULLPTR);

private slots:
	void buttonClicked();

private:
    Ui::clickerClass ui;
};
