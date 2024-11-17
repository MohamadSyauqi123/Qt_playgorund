#include "dialog.h"
#include "qt_mylib.h"
#include "ui_dialog.h"

double num1, num2, result2 = 0;
Qt_MyLib tLib;

Dialog::Dialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Dialog)
{
    ui->setupUi(this);
}

Dialog::~Dialog()
{
    delete ui;
}

void Dialog::on_lineEdit_2_textChanged(const QString &arg1)
{
    num1 = arg1.toDouble();
}

void Dialog::on_lineEdit_textChanged(const QString &arg1)
{
    num2 = arg1.toDouble();
}

void Dialog::on_pushButton_clicked()
{
    //result2=num1 + num2;
    // ui->label_4->setText(QString::number(result2));
    float returnedValue = tLib.Addition(num1, num2,&result2);
    ui->label_4->setText(QString::number(returnedValue));
}

void Dialog::on_pushButton_5_clicked()
{
    // ui->label_4->setText(QString::number(tLib.Subtraction(num1,num2)));
    float returnedValue = tLib.Subtraction(num1, num2,&result2);
    ui->label_4->setText(QString::number(returnedValue));
}

void Dialog::on_pushButton_3_clicked()
{
    // ui->label_4->setText(QString::number(tLib.Multiplication(num1,num2)));
    float returnedValue = tLib.Multiplication(num1, num2,&result2);
    ui->label_4->setText(QString::number(returnedValue));
}

void Dialog::on_pushButton_4_clicked()
{
    // ui->label_4->setText(QString::number(tLib.Dividetion(num1, num2)));
    float returnedValue = tLib.Dividetion(num1, num2,&result2);
    ui->label_4->setText(QString::number(returnedValue));
}
