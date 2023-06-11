#ifndef SETACQUIREPARAMFORM_H
#define SETACQUIREPARAMFORM_H

#include <QWidget>

namespace Ui {
class SetAcquireParamForm;
}

class SetAcquireParamForm : public QWidget
{
    Q_OBJECT

public:
    explicit SetAcquireParamForm(QWidget *parent = nullptr);
    ~SetAcquireParamForm();

private:
    Ui::SetAcquireParamForm *ui;
};

#endif // SETACQUIREPARAMFORM_H
