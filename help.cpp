#include "help.h"
#include "ui_help.h"

help::help(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::help)
{
    ui->setupUi(this);
    setWindowIcon(QIcon(":/res/icon.png"));
    this->setWindowTitle("帮助文档");
}

help::~help()
{
    delete ui;
}
