#include "start.h"
#include "ui_start.h"
#include"loading.h"
#include"connectus.h"
#include"ranking.h"
start::start(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::start)
    , loadingwindow(nullptr)
    , rankingwindow(nullptr)
{
    ui->setupUi(this);
    setWindowTitle("上海浮生记");
    setWindowIcon(QIcon(":/res/icon.png"));
}

start::~start()
{
    delete ui;
}

void start::on_startbutton_clicked()
{
    if(!loadingwindow)
    {
        loadingwindow=new loading();
        loadingwindow->show();
    }
    this->close();
}

void start::on_rankbutton_clicked()
{
    // if(!rankingwindow)
    {
        rankingwindow=new Ranking();
        rankingwindow->show();
    }

}
void start::on_connectusbutton_clicked()
{
    // if(!connectUsWindow)
    {
        connectUsWindow=new connectUs();
        connectUsWindow->show();
    }
}


void start::on_gotoback_clicked()
{
    backe=new backend();
    backe->show();
}

