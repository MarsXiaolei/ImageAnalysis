#include "SetAcquireParamForm.h"
#include "ui_SetAcquireParamForm.h"
#include <QPushButton>
#include <QLabel>

SetAcquireParamForm::SetAcquireParamForm(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::SetAcquireParamForm)
{
    ui->setupUi(this);
    QLabel *label = new QLabel(tr("Exposure Time"));
    QPushButton *button = new QPushButton(tr("Gain"));
    QVBoxLayout *layout = new QVBoxLayout;
    layout->addWidget(label);
    layout->addWidget(button);
    ui->pageCameraParam->setLayout(layout);

    QLabel *label_2 = new QLabel(tr("Exposure Time"));
    QPushButton *button_2 = new QPushButton(tr("Gain"));
    QVBoxLayout *layout_2 = new QVBoxLayout;
    layout_2->addWidget(label_2);
    layout_2->addWidget(button_2);
    ui->pageShowParam->setLayout(layout_2);

    QLabel *label_3 = new QLabel(tr("Exposure Time"));
    QPushButton *button_3 = new QPushButton(tr("Gain"));
    QVBoxLayout *layout_3 = new QVBoxLayout;
    layout_3->addWidget(label_3);
    layout_3->addWidget(button_3);
    ui->pageAcquireParam->setLayout(layout_3);
}

SetAcquireParamForm::~SetAcquireParamForm()
{
    delete ui;
}
