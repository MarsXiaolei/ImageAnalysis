#include "widget.h"
#include "ui_widget.h"
#include "DeviceManageForm.h"
#include "SetAcquireParamForm.h"
#include "SpectralAnalysisForm.h"
#include <QDebug>

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);
    setWindowTitle(APP_TITLE);
    DeviceManageForm *deviceManageForm = new DeviceManageForm(ui->stackedWidget);
    ui->stackedWidget->addWidget(deviceManageForm);
    SetAcquireParamForm *setAcquireParamForm = new SetAcquireParamForm(ui->stackedWidget);
    ui->stackedWidget->addWidget(setAcquireParamForm);
    SpectralAnalysisForm *spectralAnalysisForm = new SpectralAnalysisForm(this);
    ui->stackedWidget->addWidget(spectralAnalysisForm);
    connect(ui->listWidget, static_cast<void(QListWidget::*)(int)>(&QListWidget::currentRowChanged), [=](int index){
        qDebug()<<"currentRowChanged"<<index;
        ui->stackedWidget->setCurrentIndex(index);
    });

}

Widget::~Widget()
{
    delete ui;
}
