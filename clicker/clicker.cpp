#include "clicker.h"

clicker::clicker(QWidget *parent)
    : QMainWindow(parent)
{
    ui.setupUi(this);

	connect(ui.pushButton, &QPushButton::clicked, this, &clicker::buttonClicked);
}
void clicker::buttonClicked()
{
	static int count = 0;
	count++;
	ui.lcdNumber->display(count);
}
