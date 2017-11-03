#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    QString bak=ui->textEdit->toPlainText(),tmp;
    float wynik=1.0,a=bak.toFloat();



    if(ui->radioButton->isChecked())
    {
        wynik=((a-32)*(5.0/9.0));
        tmp = QString::number(wynik);
         ui->label->setText(tmp+"°C");
    }
    if(ui->radioButton_2->isChecked()){

        wynik=32+(9.0/5.0*a);
        tmp = QString::number(wynik);
        ui->label->setText(tmp+"°F");
    }

}

void MainWindow::on_radioButton_clicked()
{
    ui->label_2->setText("°F");
}

void MainWindow::on_radioButton_2_clicked()
{
     ui->label_2->setText("°C");
}
