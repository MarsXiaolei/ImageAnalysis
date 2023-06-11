#include "SpectralAnalysisForm.h"
#include "ui_SpectralAnalysisForm.h"
#include <QGraphicsScene>
#include <QGraphicsPixmapItem>

SpectralAnalysisForm::SpectralAnalysisForm(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::SpectralAnalysisForm)
{
    ui->setupUi(this);

    // 创建一个图形场景
    QGraphicsScene *scene = new QGraphicsScene(this);
    // 创建一个图像图形项
    QGraphicsPixmapItem *item = scene->addPixmap(QPixmap("F:\\image\\57.jpg"));
    item->setPos(0, 0);
    // 将图像添加到场景中
    scene->addItem(item);
    // 将场景设置为视图的场景
    ui->graphicsView->setScene(scene);
    // 将图片显示在正中央
    //view->fitInView(item, Qt::KeepAspectRatio);
    ui->graphicsView->setRenderHint(QPainter::Antialiasing);
    // 显示视图
    ui->graphicsView->show();
}

SpectralAnalysisForm::~SpectralAnalysisForm()
{
    delete ui;
}
