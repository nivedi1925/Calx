#ifndef CALX_H
#define CALX_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui {
class calx;
}
QT_END_NAMESPACE

class calx : public QMainWindow
{
    Q_OBJECT

public:
    calx(QWidget *parent = nullptr);
    ~calx();

private slots:
    void on_oneButton_clicked();

    void on_twoButton_clicked();

    void on_threeButton_clicked();

    void on_fourButton_clicked();

    void on_fiveButton_clicked();

    void on_sixButton_clicked();

    void on_sevenButton_clicked();

    void on_eightButton_clicked();

    void on_nineButton_clicked();

    void on_zeroButton_clicked();

    void on_clearButton_clicked();

    void on_equalButton_clicked();

    void on_additionButton_clicked();

    void on_substractButton_clicked();

    void on_multiplyButton_clicked();

    void on_divideButton_clicked();

private:
    Ui::calx *ui;
    double num1;
    QString symbol;
};
#endif // CALX_H
