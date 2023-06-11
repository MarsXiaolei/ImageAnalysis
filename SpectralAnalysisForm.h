#ifndef SPECTRALANALYSISFORM_H
#define SPECTRALANALYSISFORM_H

#include <QWidget>

namespace Ui {
class SpectralAnalysisForm;
}

class SpectralAnalysisForm : public QWidget
{
    Q_OBJECT

public:
    explicit SpectralAnalysisForm(QWidget *parent = nullptr);
    ~SpectralAnalysisForm();

private:
    Ui::SpectralAnalysisForm *ui;
};

#endif // SPECTRALANALYSISFORM_H
