#ifndef DEVICEMANAGEMENTFORM_H
#define DEVICEMANAGEMENTFORM_H

#include <QWidget>

namespace Ui {
class DeviceManageForm;
}

class DeviceManageForm : public QWidget
{
    Q_OBJECT

public:
    explicit DeviceManageForm(QWidget *parent = 0);
    ~DeviceManageForm();

private:
    Ui::DeviceManageForm *ui;
};

#endif // DEVICEMANAGEMENTFORM_H
