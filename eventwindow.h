#ifndef EVENTWINDOW_H
#define EVENTWINDOW_H

#include <QWidget>

namespace Ui {
class eventwindow;
}

class eventwindow : public QWidget
{
    Q_OBJECT

public:
    explicit eventwindow(QWidget *parent = nullptr);
    void triggerRandomEvent();
    ~eventwindow();
private slots:
    void on_OK_clicked();
private:
    Ui::eventwindow *ui;
    std::vector<std::pair<std::string, std::pair<int, int>>> events;
};

#endif // EVENTWINDOW_H
