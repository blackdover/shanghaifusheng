#ifndef LOADING_H
#define LOADING_H

#include <QWidget>
#include "mainwindow.h"
namespace Ui {
class loading;
}

class loading : public QWidget
{
    Q_OBJECT

public:
    explicit loading(QWidget *parent = nullptr);
    ~loading();

private slots:
    void on_begin_clicked();


private:
    Ui::loading *ui;
    MainWindow *mainwindow=nullptr;

};

#endif // LOADING_H
