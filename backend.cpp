#include "backend.h"
#include "ui_backend.h"

backend::backend(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::backend)
{
    ui->setupUi(this);
    setWindowIcon(QIcon(":/res/icon.png"));
    this->setWindowTitle("后台");
}

backend::~backend()
{
    delete ui;
}
