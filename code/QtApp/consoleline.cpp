#include "consoleline.h"
#include "ui_consoleline.h"

ConsoleLine::ConsoleLine(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::ConsoleLine)
{
    ui->setupUi(this);
}

ConsoleLine::~ConsoleLine()
{
    delete ui;
}
