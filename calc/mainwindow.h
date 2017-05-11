#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private:
    Ui::MainWindow *ui;
private slots:
    void digit_presed();
    void binary_operation();
    void on_pushButton_result_released();
    void on_pushButton_clear_released();    
};

#endif // MAINWINDOW_H
