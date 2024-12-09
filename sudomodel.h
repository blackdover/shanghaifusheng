#ifndef SUDOMODEL_H
#define SUDOMODEL_H

#include <QWidget>
#include"player.h"
namespace Ui {
class sudomodel;
}
class sudomodel : public QWidget
{
    Q_OBJECT

public:
    explicit sudomodel(QWidget *parent = nullptr);
    ~sudomodel();
    void setPlayer(Player* player);
private slots:

    void on_pushButton_3_clicked();
    void on_moneyadd_clicked();
    void on_healthadd_clicked();
    void on_fameadd_clicked();

private:
    Ui::sudomodel *ui;
    Player *player=nullptr;
};

#endif // SUDOMODEL_H
