#include "calx.h"
#include "ui_calx.h"

calx::calx(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::calx)
{
    ui->setupUi(this);
    num1 = 0;
    symbol = "";
}

calx::~calx()
{
    delete ui;
}

void calx::on_oneButton_clicked()
{
    QString num = ui->outputLineEdit->text();
    ui->outputLineEdit->setText(num+"1");
}


void calx::on_twoButton_clicked()
{
    QString num = ui->outputLineEdit->text();
    ui->outputLineEdit->setText(num+"2");
}


void calx::on_threeButton_clicked()
{
    QString num = ui->outputLineEdit->text();
    ui->outputLineEdit->setText(num+"3");
}


void calx::on_fourButton_clicked()
{
    QString num = ui->outputLineEdit->text();
    ui->outputLineEdit->setText(num+"4");
}


void calx::on_fiveButton_clicked()
{
    QString num = ui->outputLineEdit->text();
    ui->outputLineEdit->setText(num+"5");
}


void calx::on_sixButton_clicked()
{
    QString num = ui->outputLineEdit->text();
    ui->outputLineEdit->setText(num+"6");
}


void calx::on_sevenButton_clicked()
{
    QString num = ui->outputLineEdit->text();
    ui->outputLineEdit->setText(num+"7");
}


void calx::on_eightButton_clicked()
{
    QString num = ui->outputLineEdit->text();
    ui->outputLineEdit->setText(num+"8");
}


void calx::on_nineButton_clicked()
{
    QString num = ui->outputLineEdit->text();
    ui->outputLineEdit->setText(num+"9");
}


void calx::on_zeroButton_clicked()
{
    QString num = ui->outputLineEdit->text();
    ui->outputLineEdit->setText(num+"0");
}


void calx::on_clearButton_clicked()
{
     ui->outputLineEdit->setText("");
}


void calx::on_equalButton_clicked()
{
    double num2 = ui->outputLineEdit->text().toDouble();
    double result = 0;
    if (symbol == "+")
    {
        result = num1 + num2;
    }
    else if (symbol == "-")
    {
        result = num1 - num2;
    }
    else if (symbol == "*")
    {
        result = num1 * num2;
    }
    else if (symbol == "/")
    {
        result = num1 / num2;
    }

    ui->outputLineEdit->setText(QString::number(result));
}


void calx::on_additionButton_clicked()
{
     num1 = ui->outputLineEdit->text().toDouble();
     symbol = "+";
     ui->outputLineEdit->setText("");
}


void calx::on_substractButton_clicked()
{
    num1 = ui->outputLineEdit->text().toDouble();
    symbol = "-";
    ui->outputLineEdit->setText("");
}


void calx::on_multiplyButton_clicked()
{
    num1 = ui->outputLineEdit->text().toDouble();
    symbol = "*";
    ui->outputLineEdit->setText("");
}


void calx::on_divideButton_clicked()
{
    num1 = ui->outputLineEdit->text().toDouble();
    symbol = "/";
    ui->outputLineEdit->setText("");
}

