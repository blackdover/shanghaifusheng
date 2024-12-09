#ifndef BACKEND_H
#define BACKEND_H

#include <QWidget>

namespace Ui {
class backend;
}

class backend : public QWidget
{
    Q_OBJECT

public:
    explicit backend(QWidget *parent = nullptr);
    ~backend();

private:
    Ui::backend *ui;
};

#endif // BACKEND_H
