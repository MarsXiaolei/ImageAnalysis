#include "widget.h"
#include <QApplication>
#include <QFile>
#include <QDebug>
#include <QIODevice>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    QFile file(":/qss/stylesheet.qss"); // 创建一个 QFile 对象，指定 qss 文件的路径
    if (file.open(QIODevice::ReadOnly)) { // 打开文件，如果成功则返回 true
      QString styleSheet = file.readAll(); // 读取文件内容到一个字符串中
      a.setStyleSheet(styleSheet);
      file.close(); // 关闭文件
      // ... 其他代码
    } else { // 打开文件失败
      qDebug() << "Cannot open file:" << file.errorString(); // 输出错误信息
    }

    Widget w;
    w.show();

    return a.exec();
}
