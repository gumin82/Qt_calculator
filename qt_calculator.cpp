#include "qt_calculator.h"
#include "ui_qt_calculator.h"

Qt_calculator::Qt_calculator(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Qt_calculator)
{
    ui->setupUi(this);
}

Qt_calculator::~Qt_calculator()
{
    delete ui;
}
