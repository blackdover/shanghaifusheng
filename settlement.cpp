#include "settlement.h"
#include "ui_settlement.h"

settlement::settlement(MainWindow *main,QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::settlement)
    ,mainwindow(main)
{
    ui->setupUi(this);
    this->setWindowTitle("结算画面（此处应有攒劲的小曲）");

    setWindowIcon(QIcon(":/res/icon.png"));

    inputName();

    Player *p=mainwindow->getPlayer();

    money = p->getMoney()+p->getBankMoney()-p->getGiveUpMoney();
    health=p->getHealth();
    fame=p->getFame();
    ui->name->setText(name);
    ui -> name -> setAlignment(Qt::AlignCenter);
    ui->money->setText(QString::number(money));
    ui->health->setText(QString::number(health));
    ui->fame->setText(QString::number(fame));
    setTitle(p);

    scoreAdd();
}

settlement::~settlement()
{
    delete ui;
}

void settlement::inputName()
{
    bool ok;
    name = QInputDialog::getText(this, "人口普查", "请输入你的大名:", QLineEdit::Normal, "佚名", &ok);
    // 检查用户是否点击了“OK”按钮
    if (ok && !name.isEmpty()) {

    } else {
        name="连名都没留就匆忙离开的侠客";
    }
}

void settlement::on_torank_clicked()
{
    Ranking *r = new Ranking();
    r->show();
}

void settlement::scoreAdd()
{
    QString appDir = QCoreApplication::applicationDirPath();
    QString filePath = QDir(appDir).filePath("res/score.txt");
    qDebug() << "文件路径：" << filePath;  // 输出文件路径以调试
    QFile file(filePath);
    if (!file.open(QIODevice::Append | QIODevice::Text)) {
        qWarning() << "无法打开文件：" << filePath;
        qWarning() << "错误原因：" << file.errorString();
        return;
    }
    QTextStream out(&file);
    out << name << " " << money << " " << health << " " << fame << " " << title << "\n";
    file.close();
    qDebug() << "数据已成功添加到文件：" << filePath;
}



void settlement::on_newgame_clicked()
{
    this->close();
    mainwindow->close();
    MainWindow *m=new MainWindow;
    m->show();
}


void settlement::on_leave_clicked()
{
    this->close();
    mainwindow->close();
}

void settlement::setTitle(Player *player)
{
    // 定义金钱等级
    enum MoneyCategory { DEEPLY_IN_DEBT, IN_DEBT, VERY_POOR, POOR, COMFORTABLE, WEALTHY, SUPER_RICH };
    MoneyCategory moneyCat;
    if (money >= 1000000000) {
        moneyCat = SUPER_RICH;
    } else if (money >= 100000) {
        moneyCat = WEALTHY;
    } else if (money >= 10000) {
        moneyCat = COMFORTABLE;
    } else if (money >= 100) {
        moneyCat = POOR;
    } else if (money >= 0) {
        moneyCat = VERY_POOR;
    } else if (money > -10000) {
        moneyCat = IN_DEBT;
    } else {
        moneyCat = DEEPLY_IN_DEBT;
    }

    // 健康等级
    enum HealthCategory { UNHEALTHY, AVERAGE_HEALTH, HEALTHY };
    HealthCategory healthCat;
    if (health >= 70) {
        healthCat = HEALTHY;
    } else if (health >= 30) {
        healthCat = AVERAGE_HEALTH;
    } else {
        healthCat = UNHEALTHY;
    }

    // 声誉等级
    enum FameCategory { UNKNOWN, KNOWN, FAMOUS };
    FameCategory fameCat;
    if (fame >= 70) {
        fameCat = FAMOUS;
    } else if (fame >= 30) {
        fameCat = KNOWN;
    } else {
        fameCat = UNKNOWN;
    }

    if (moneyCat == SUPER_RICH && healthCat == HEALTHY && fameCat == FAMOUS) {
        title = "至仁至善至强之王";
    }
    else if (moneyCat == SUPER_RICH) {
        title = "天上地下唯我这般富有";
    }
    else if (moneyCat == WEALTHY && healthCat == HEALTHY) {
        title = "有米且命长";
    }
    else if (moneyCat == WEALTHY && fameCat == FAMOUS) {
        title = "名富天下的荣耀之人";
    }
    else if (healthCat == HEALTHY && fameCat == FAMOUS) {
        title = "临港活着的传奇";
    }
    else if (moneyCat == IN_DEBT) {
        title = "负债英豪";
    }
    else if (moneyCat == DEEPLY_IN_DEBT) {
        title = "欠的越多欠的越少";
    }
    else if (moneyCat == VERY_POOR && fameCat == FAMOUS) {
        title = "贫寒传奇";
    }
    else if (healthCat == HEALTHY) {
        title = "永生之人";
    }
    else if (fameCat == FAMOUS) {
        title = "无人不知无人不晓";
    }
    else if (moneyCat == POOR && healthCat == UNHEALTHY) {
        title = "苦行旅者";
    }
    else if (moneyCat == POOR && healthCat == HEALTHY) {
        title = "村民";
    }
    else if (moneyCat == POOR) {
        title = "奋斗不息";
    }
    else if (moneyCat == VERY_POOR) {
        title = "流浪汉";
    }
    else {
        title = "无畏奋进之人";
    }

    ui->title->setText(title);
}

