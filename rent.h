#ifndef RENT_H
#define RENT_H

#include <QDialog>
#include "player.h"

namespace Ui {
class Rent;
}

class Rent : public QDialog
{
    Q_OBJECT

public:
    explicit Rent(Player *player,QWidget *parent = nullptr);
    ~Rent();

private slots:
    void on_leaveButton_clicked();
    void on_oneButton_clicked();
    void on_twoButton_clicked();
    void on_threeButton_clicked();
    void on_fourButton_clicked();
    void on_fiveButton_clicked();

private:
    Ui::Rent *ui;
    Player *player;

signals:
    void bagMaxSizeChanged();

};

#endif // RENT_H
