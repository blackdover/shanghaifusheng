#include "connectus.h"
#include "ui_connectus.h"
#include <QLabel>
#include <QVBoxLayout>
#include <QDesktopServices>
#include <QUrl>
#include<QPixmap>
connectUs::connectUs(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::connectUs)
{
    ui->setupUi(this);
    ui->github->setText("<a href='https://github.com/smu-cs-cpp-project-team/shanghaifusheng'>点击跳转</a>");
    // ui->github->setTextInteractionFlags(Qt::TextBrowserInteraction); // 允许点击
    ui->github->setOpenExternalLinks(true); // 点击时自动打开外部链接
    setWindowTitle("联系我们");
    setWindowIcon(QIcon(":/res/icon.png"));

    QPixmap pixmap(":/res/qrcode");
    ui->qrcodeimg->setPixmap(pixmap);
    ui->qrcodeimg->setScaledContents(true);
}

connectUs::~connectUs()
{
    delete ui;
}
