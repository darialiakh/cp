#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <QDebug>
double firstNum;
bool userIsTypingSeconNumber = false;

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    connect(ui->pushButton_0,SIGNAL(released()),this,SLOT(digit_presed()));
    connect(ui->pushButton_1,SIGNAL(released()),this,SLOT(digit_presed()));
    connect(ui->pushButton_2,SIGNAL(released()),this,SLOT(digit_presed()));
    connect(ui->pushButton_3,SIGNAL(released()),this,SLOT(digit_presed()));
    connect(ui->pushButton_4,SIGNAL(released()),this,SLOT(digit_presed()));
    connect(ui->pushButton_5,SIGNAL(released()),this,SLOT(digit_presed()));
    connect(ui->pushButton_6,SIGNAL(released()),this,SLOT(digit_presed()));
    connect(ui->pushButton_7,SIGNAL(released()),this,SLOT(digit_presed()));
    connect(ui->pushButton_8,SIGNAL(released()),this,SLOT(digit_presed()));
    connect(ui->pushButton_9,SIGNAL(released()),this,SLOT(digit_presed()));
    connect(ui->pushButton_add,SIGNAL(released()),this,SLOT(binary_operation()));
    connect(ui->pushButton_minus,SIGNAL(released()),this,SLOT(binary_operation()));
    connect(ui->pushButton_multiply,SIGNAL(released()),this,SLOT(binary_operation()));
    connect(ui->pushButton_devide,SIGNAL(released()),this,SLOT(binary_operation()));
    ui->pushButton_add->setCheckable(true);
    ui->pushButton_minus->setCheckable(true);
    ui->pushButton_multiply->setCheckable(true);
    ui->pushButton_devide->setCheckable(true);
}


MainWindow::~MainWindow() //деструктор
{
    delete ui;
}


void MainWindow::digit_presed(){
    QPushButton* button = (QPushButton*)sender();
    double labelNumber;
    QString newLabel;

    if((ui->pushButton_add->isChecked() ||
            ui->pushButton_minus->isChecked() ||
            ui->pushButton_multiply->isChecked() ||
            ui->pushButton_devide->isChecked())
            && (!userIsTypingSeconNumber)){
        userIsTypingSeconNumber = true;
        labelNumber = button->text().toDouble();
    } else {
         labelNumber = (ui->label->text() + button->text()).toDouble();
    }


    newLabel = QString::number(labelNumber, 'g', 15);
    ui->label->setText(newLabel);

}

void MainWindow::binary_operation(){
    QPushButton * button = (QPushButton*)sender();

    firstNum = ui->label->text().toDouble();
    button->setChecked(true);

}

void MainWindow::on_pushButton_result_released()  //реализация действий
{
    double labelNumber, secondNum;
    QString newLabel;
    secondNum = ui->label->text().toDouble();
    if(ui->pushButton_add->isChecked())    //реализация добавления
    {
        labelNumber = firstNum + secondNum;
        newLabel = QString::number(labelNumber, 'g' , 15);
        ui->label->setText(newLabel);
        ui->pushButton_add->setCheckable(false);
    }
    else if(ui->pushButton_minus->isChecked())   //реализация вычитания
    {
        labelNumber = firstNum - secondNum;
        newLabel = QString::number(labelNumber, 'g' , 15);
        ui->label->setText(newLabel);
        ui->pushButton_minus->setCheckable(false);
    }
    else if(ui->pushButton_multiply->isChecked())  //реализация умножения
    {
        labelNumber = firstNum*secondNum;
        newLabel = QString::number(labelNumber, 'g' , 15);
        ui->label->setText(newLabel);
        ui->pushButton_multiply->setCheckable(false);
    }
    else if(ui->pushButton_devide->isChecked())  //реализация деления
    {
        labelNumber = firstNum/secondNum;
        newLabel = QString::number(labelNumber, 'g' , 15);
        ui->label->setText(newLabel);
        ui->pushButton_devide->setCheckable(false);
    }
    userIsTypingSeconNumber = false;
}

void MainWindow::on_pushButton_clear_released()   //обнуление
{
    ui->pushButton_add->setChecked(false);
    ui->pushButton_multiply->setChecked(false);
    ui->pushButton_devide->setChecked(false);
    ui->pushButton_minus->setChecked(false);
    userIsTypingSeconNumber = false;
    ui->label->setText("0");
}
