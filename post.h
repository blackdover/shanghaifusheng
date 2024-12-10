#ifndef POST_H
#define POST_H

#include <QDialog>
#include "player.h"

namespace Ui {
class Post;
}

class Post : public QDialog
{
    Q_OBJECT

public:
    explicit Post(Player *player,QWidget *parent = nullptr);
    ~Post();

private slots:
    void on_leaveButton_clicked();
    void on_payButton_clicked();

    void on_lendButton_clicked();

private:
    Ui::Post *ui;
    Player *player;

signals:
    void giveUpMoneyChanged(long long payback);
};

#endif // POST_H
