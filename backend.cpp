#include "backend.h"
#include "ui_backend.h"
#include<qmessagebox.h>

backend::backend(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::backend)
{
    ui->setupUi(this);
    setWindowIcon(QIcon(":/res/icon.png"));
    this->setWindowTitle("后台");
    // ui->itemWidget->header()->setSectionResizeMode(QHeaderView::Stretch);
    itemWidget=ui->itemWidget;

    itemWidget->header()->setSectionResizeMode(0, QHeaderView::Fixed);
    itemWidget->setColumnWidth(0, 130);

    itemWidget->header()->setSectionResizeMode(1, QHeaderView::Stretch);
    // itemWidget->setColumnWidth(1, 60);

    itemWidget->header()->setSectionResizeMode(2, QHeaderView::Stretch);


    // 加载商品数据
    if (!itemManager.loadItemsFromFile("")) {
        QMessageBox::critical(this, "加载错误", "无法加载items.txt文件");
        exit(-1);
    }

    connect(itemWidget, &QTreeWidget::itemClicked, this, &backend::onItemSelected);
    loadItemsToTree();
}

backend::~backend()
{
    delete ui;
}

void backend::on_confirmbutton_clicked()
{
    if(ui->coreedit->text()=="12345")
    {
        ui->loginwidget->close();
    }
    else
    {
        QMessageBox::information(this,"离开这！","你没有进入这里的权限",QMessageBox::Ok);
        this->close();
    }
}
void backend::loadItemsToTree()
{
    ui->itemWidget->clear();
    const auto& items = itemManager.getAllItems();
    for (const auto& item : items) {
        addItemToTree(item);
    }
}

void backend::addItemToTree(const Item& item)
{
    QTreeWidgetItem* treeItem = new QTreeWidgetItem();
    treeItem->setText(0, QString::fromStdString(item.getName()));
    treeItem->setText(1, QString::number(item.getBasePrice()));
    treeItem->setText(2, QString::number(item.getPriceFluctuation()));
    itemWidget->addTopLevelItem(treeItem);
}
void backend::on_addconfirm_clicked()
{
    QString name = ui->newitemname->text().trimmed();
    QString baseStr = ui->newitembase->text().trimmed();
    QString flowStr = ui->newitemflow->text().trimmed();

    if (name.isEmpty() || baseStr.isEmpty() || flowStr.isEmpty()) {
        QMessageBox::warning(this, "输入错误", "请填写所有字段！");
        return;
    }

    bool ok1, ok2;
    qint64 basePrice = baseStr.toLongLong(&ok1);
    qint64 flowPrice = flowStr.toLongLong(&ok2);

    if (!ok1 || !ok2) {
        QMessageBox::warning(this, "输入错误", "基准价格和浮动价格必须是有效的数字！");
        return;
    }

    // 确认
    QMessageBox::StandardButton reply;
    reply = QMessageBox::question(this, "确认添加", "确定要添加这个商品吗？",
                                  QMessageBox::Yes | QMessageBox::No);
    if (reply != QMessageBox::Yes)
        return;

    Item newItem(name.toStdString(), basePrice, flowPrice);

    // 添加到ItemManager
    if (!itemManager.addItem(newItem)) {
        QMessageBox::critical(this, "添加失败", "无法将商品添加到文件中。可能是名称重复。");
        return;
    }
    //添加到显示
    addItemToTree(newItem);

    // 清空输入
    ui->newitemname->clear();
    ui->newitembase->clear();
    ui->newitemflow->clear();

    QMessageBox::information(this, "添加成功", "商品已成功添加！");
}


void backend::on_deleteconfirm_clicked()
{
    QList<QTreeWidgetItem*> selectedItems = itemWidget->selectedItems();
    if (selectedItems.isEmpty()) {
        QMessageBox::warning(this, "选择错误", "请先选择一个商品！");
        return;
    }

    QTreeWidgetItem* selectedItem = selectedItems.first();
    QString name = selectedItem->text(0);

    // 确认
    QMessageBox::StandardButton reply;
    reply = QMessageBox::question(this, "确认删除", "确定要删除这个商品吗？",
                                  QMessageBox::Yes | QMessageBox::No);
    if (reply != QMessageBox::Yes)
        return;

    // 删除项目
    if (!itemManager.deleteItem(name.toStdString())) {
        QMessageBox::critical(this, "删除失败", "无法删除商品。");
        return;
    }

    delete selectedItem;

    // 清空
    ui->nameedit->clear();
    ui->baseedit->clear();
    ui->flowedit->clear();

    QMessageBox::information(this, "删除成功", "商品已成功删除！");
}


void backend::on_editconfirm_clicked()
{
    QList<QTreeWidgetItem*> selectedItems = itemWidget->selectedItems();
    if (selectedItems.isEmpty()) {
        QMessageBox::warning(this, "选择错误", "请先选择一个商品！");
        return;
    }

    QTreeWidgetItem* selectedItem = selectedItems.first();
    QString oldName = selectedItem->text(0);
    QString newName = ui->nameedit->text().trimmed();
    QString baseStr = ui->baseedit->text().trimmed();
    QString flowStr = ui->flowedit->text().trimmed();

    if (newName.isEmpty() || baseStr.isEmpty() || flowStr.isEmpty()) {
        QMessageBox::warning(this, "输入错误", "请填写所有字段！");
        return;
    }

    bool ok1, ok2;
    qint64 basePrice = baseStr.toLongLong(&ok1);
    qint64 flowPrice = flowStr.toLongLong(&ok2);

    if (!ok1 || !ok2) {
        QMessageBox::warning(this, "输入错误", "基准价格和浮动价格必须是有效的数字！");
        return;
    }

    // 确认
    QMessageBox::StandardButton reply;
    reply = QMessageBox::question(this, "确认修改", "确定要修改这个商品吗？",
                                  QMessageBox::Yes | QMessageBox::No);
    if (reply != QMessageBox::Yes)
        return;

    // 更新后的Item
    Item updatedItem(newName.toStdString(), basePrice, flowPrice);

    // 修改 ItemManager
    if (!itemManager.modifyItem(oldName.toStdString(), updatedItem)) {
        QMessageBox::critical(this, "修改失败", "无法修改商品。可能是名称重复。");
        return;
    }

    // 更新
    selectedItem->setText(0, newName);
    selectedItem->setText(1, QString::number(basePrice));
    selectedItem->setText(2, QString::number(flowPrice));

    // 清空编辑框
    ui->nameedit->clear();
    ui->baseedit->clear();
    ui->flowedit->clear();

    QMessageBox::information(this, "修改成功", "商品已成功修改！");
}


void backend::onItemSelected(QTreeWidgetItem* item, int column)
{
    if (!item)
        return;

    ui->nameedit->setText(item->text(0));
    ui->baseedit->setText(item->text(1));
    ui->flowedit->setText(item->text(2));
}
