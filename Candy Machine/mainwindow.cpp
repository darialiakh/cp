#include "mainwindow.h"
#include "ui_mainwindow.h"

using namespace std;

int num;
int price;
int money;

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

void MainWindow::on_start_clicked()
{
    ui->line->setText("Выберите вид");
}

void MainWindow::on_chocolate_clicked(bool checked)
{
    price = 7;
    ui->line->setText("Выберите количество");
}

void MainWindow::on_jelly_clicked(bool checked)
{
    price = 5;
    ui->line->setText("Выберите количество");
}

void MainWindow::on_gum_clicked(bool checked)
{
    price = 3;
    ui->line->setText("Выберите количество");
}

void MainWindow::on_spinBox_valueChanged(const QString &arg1)
{
    num=ui->spinBox->value();
    ui->line->setText("Внесите деньги");
}

void MainWindow::on_money_textChanged(const QString &arg1)
{
  QString str;
  str = ui->money->text();
  money =str.toInt();
}

void MainWindow::on_coins_clicked()
{
    int sum;
    if (money<num * price)
             QMessageBox::information(0, "Сдача", "Недостаточно денег");
    else
    {
         sum =money-num * price;
         QString s;
         s.setNum(sum);
         s = "Ваша сдача: " + s;
         QMessageBox::information(0, "Сдача", s);
    }
}

void MainWindow::on_Candy_clicked()
{
    if (money<num * price)
        QMessageBox::information(0, "Получить конфеты", "Недостаточно денег");
    else
    {
        QString n, p,c;
        n.setNum(num);
        c="Вы получили " + n;
        c=c+" ";

        if (price==7)
        {
            p="шоколадных";
            c=c+p;
            c=c+" конфет";
            QMessageBox::information(0, "Получить конфеты", c);
        }
              else if (price==5)
              {
                 p="желейных";
                 c=c+p;
                 c=c+" конфет";
                 QMessageBox::information(0, "Получить конфеты", c);
              }
                  else if (price==3)
                  {
                     p="жевательных";
                     c=c+p;
                     c=c+" конфет";
                     QMessageBox::information(0, "Получить конфеты", c);
                  }
    }
}
