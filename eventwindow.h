#ifndef EVENTWINDOW_H
#define EVENTWINDOW_H

#include <QDialog>
#include <eventmanager.h>

namespace Ui {
class eventwindow;
}

class eventwindow : public QDialog
{
    Q_OBJECT

public:
    explicit eventwindow(QWidget *parent = nullptr);
    RandomEvent* triggerRandomEvent();
    ~eventwindow();
private slots:
    void on_OK_clicked();
private:
    Ui::eventwindow *ui;
    EventManager eventManager;
    QVector<RandomEvent> events;
};

#endif // EVENTWINDOW_H
