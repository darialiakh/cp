#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QMessageBox>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_start_clicked();
    void on_chocolate_clicked(bool checked);
    void on_jelly_clicked(bool checked);
    void on_gum_clicked(bool checked);
    void on_spinBox_valueChanged(const QString &arg1);
    void on_coins_clicked();
    void on_money_textChanged(const QString &arg1);
    void on_Candy_clicked();

private:
    Ui::MainWindow *ui;
    int a1;
};

#endif // MAINWINDOW_H
