#include "DeviceManageForm.h"
#include "ui_DeviceManageForm.h"
#include <QAction>

DeviceManageForm::DeviceManageForm(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::DeviceManageForm)
{
    ui->setupUi(this);
    QAction *pAction = new QAction(this);
    pAction->setIcon(QIcon(":/Images/computer_fill_1.png"));
    ui->toolButton->setIconSize(QSize(64, 64));
    ui->toolButton->setToolButtonStyle(Qt::ToolButtonIconOnly);
    ui->toolButton->setDefaultAction(pAction);
}

DeviceManageForm::~DeviceManageForm()
{
    delete ui;
}
