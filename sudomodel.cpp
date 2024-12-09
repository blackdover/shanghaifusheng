#include "sudomodel.h"
#include "ui_sudomodel.h"
#include"qmessagebox.h"
#include"mainwindow.h"
sudomodel::sudomodel(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::sudomodel)
{
    ui->setupUi(this);
    setWindowIcon(QIcon(":/res/icon.png"));
    this->setWindowTitle("米奇妙妙屋");
}
sudomodel::~sudomodel()
{
    delete ui;
}

void sudomodel::setPlayer(Player* inplayer)
{
    player = inplayer;
}

void sudomodel::on_pushButton_3_clicked()
{
    if (ui->lineEdit->text() == "give me power!")
    {
        ui->widget->close();
    }
    else
    {
        QMessageBox::information(this,"离开这！","你没有进入这里的资格",QMessageBox::Ok);
        this->close();
    }
}


void sudomodel::on_moneyadd_clicked()
{
    player->addMoney(1000000);
    player->addBankMoney(1000000);

}


void sudomodel::on_healthadd_clicked()
{

    player->addHealth(10000);

}


void sudomodel::on_fameadd_clicked()
{

    player->addFame(10000);

}

