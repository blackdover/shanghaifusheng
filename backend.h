#ifndef BACKEND_H
#define BACKEND_H

#include <QWidget>
#include<itemmanager.h>
#include<qtreewidget.h>
namespace Ui {
class backend;
}

class backend : public QWidget
{
    Q_OBJECT

public:
    explicit backend(QWidget *parent = nullptr);
    ~backend();

private slots:
    void on_confirmbutton_clicked();
    void on_addconfirm_clicked();
    void on_deleteconfirm_clicked();
    void on_editconfirm_clicked();

    // void on_coreconfirmbutton_clicked();

private:
    Ui::backend *ui;

    ItemManager itemManager;
    QTreeWidget* itemWidget;
    void loadItemsToTree();
    void addItemToTree(const Item& item);
    void onItemSelected(QTreeWidgetItem* item);
};

#endif // BACKEND_H
