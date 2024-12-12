#include "loading.h"
#include "ui_loading.h"
#include "player.h"
loading::loading(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::loading)
    , mainwindow(nullptr)

{
    ui->setupUi(this);
    this->setWindowTitle("背景故事");
    setWindowIcon(QIcon(":/res/icon.png"));
}

loading::~loading()
{
    delete ui;
}

void loading::on_begin_clicked()
{
    if(!mainwindow)
    {
        mainwindow=new MainWindow();
        mainwindow->show();
    }
    this->close();
}

