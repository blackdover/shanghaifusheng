#include "hospital.h"
#include "ui_hospital.h"
#include "player.h"
#include <QInputDialog>
#include <QMessageBox>

Hospital::Hospital(Player *player,QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Hospital)
    ,player(player)
{
    ui->setupUi(this);
    setWindowTitle("医院");
    setWindowIcon(QIcon(":/res/icon.png"));
    connect(ui->cancelButton, &QPushButton::clicked, this, &Hospital::on_cancelButton_clicked);
}

Hospital::~Hospital()
{
    delete ui;
}


void Hospital::updateTipLabel()
{
    QFont font = ui->tipLabel->font();
    font.setPointSize(12);
    ui->tipLabel->setFont(font);
    ui->tipLabel->setText(QString("您现在的健康值为：%1\n我们院今天搞特价，打六折，一针500\n请问您治不治?").arg(health));
}

void Hospital::setHealth(long long h)
{
    health = h;
    updateTipLabel();
}

void Hospital::on_cureButton_clicked()
{
    if(player->getHealth() == 100)
    {
        QMessageBox::warning(this,"医生说","侬挺健康，不必要打针！");
    }
    else
    {
        bool ok;
        long long money=player->getMoney();
        int amount = QInputDialog::getInt(this,"诊室","您打算打几针？",(100-health),0,(100-health),1,&ok);
        if (ok)
        {
            if(amount*500 <= money)
            {
                health += amount;
                updateTipLabel();
                player->addHealth(amount);
                player->reduceMoney(amount*500);
                emit healthChanged(health);
            }
            else
                QMessageBox::warning(this,"护士说","侬口袋里钱不够噻！");
        }
    }
}


void Hospital::on_cancelButton_clicked()
{
    this->close();
}

