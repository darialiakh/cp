/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QPushButton *start;
    QSpinBox *spinBox;
    QLineEdit *line;
    QLabel *label_2;
    QLabel *label_3;
    QPushButton *coins;
    QPushButton *Candy;
    QRadioButton *chocolate;
    QRadioButton *jelly;
    QRadioButton *gum;
    QLineEdit *money;
    QLabel *label_4;
    QMenuBar *menuBar;
    QMenu *menu;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(265, 284);
        QPalette palette;
        QBrush brush(QColor(0, 0, 0, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QBrush brush1(QColor(255, 255, 127, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette.setBrush(QPalette::Active, QPalette::Light, brush1);
        QBrush brush2(QColor(255, 255, 63, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Midlight, brush2);
        QBrush brush3(QColor(127, 127, 0, 255));
        brush3.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Dark, brush3);
        QBrush brush4(QColor(170, 170, 0, 255));
        brush4.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Mid, brush4);
        palette.setBrush(QPalette::Active, QPalette::Text, brush);
        QBrush brush5(QColor(255, 255, 255, 255));
        brush5.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::BrightText, brush5);
        palette.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Active, QPalette::Base, brush5);
        QBrush brush6(QColor(255, 255, 0, 255));
        brush6.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Window, brush6);
        palette.setBrush(QPalette::Active, QPalette::Shadow, brush);
        palette.setBrush(QPalette::Active, QPalette::AlternateBase, brush1);
        QBrush brush7(QColor(255, 255, 220, 255));
        brush7.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::ToolTipBase, brush7);
        palette.setBrush(QPalette::Active, QPalette::ToolTipText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Button, brush6);
        palette.setBrush(QPalette::Inactive, QPalette::Light, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Midlight, brush2);
        palette.setBrush(QPalette::Inactive, QPalette::Dark, brush3);
        palette.setBrush(QPalette::Inactive, QPalette::Mid, brush4);
        palette.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette.setBrush(QPalette::Inactive, QPalette::BrightText, brush5);
        palette.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush5);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush6);
        palette.setBrush(QPalette::Inactive, QPalette::Shadow, brush);
        palette.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush7);
        palette.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush);
        palette.setBrush(QPalette::Disabled, QPalette::WindowText, brush3);
        palette.setBrush(QPalette::Disabled, QPalette::Button, brush6);
        palette.setBrush(QPalette::Disabled, QPalette::Light, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Midlight, brush2);
        palette.setBrush(QPalette::Disabled, QPalette::Dark, brush3);
        palette.setBrush(QPalette::Disabled, QPalette::Mid, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::Text, brush3);
        palette.setBrush(QPalette::Disabled, QPalette::BrightText, brush5);
        palette.setBrush(QPalette::Disabled, QPalette::ButtonText, brush3);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush6);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush6);
        palette.setBrush(QPalette::Disabled, QPalette::Shadow, brush);
        palette.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush6);
        palette.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush7);
        palette.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush);
        MainWindow->setPalette(palette);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        start = new QPushButton(centralWidget);
        start->setObjectName(QStringLiteral("start"));
        start->setGeometry(QRect(20, 20, 61, 31));
        spinBox = new QSpinBox(centralWidget);
        spinBox->setObjectName(QStringLiteral("spinBox"));
        spinBox->setGeometry(QRect(150, 150, 71, 21));
        spinBox->setMinimum(1);
        spinBox->setMaximum(15);
        line = new QLineEdit(centralWidget);
        line->setObjectName(QStringLiteral("line"));
        line->setGeometry(QRect(30, 60, 181, 21));
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(30, 150, 71, 20));
        label_3 = new QLabel(centralWidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(26, 90, 51, 20));
        coins = new QPushButton(centralWidget);
        coins->setObjectName(QStringLiteral("coins"));
        coins->setGeometry(QRect(90, 20, 61, 31));
        Candy = new QPushButton(centralWidget);
        Candy->setObjectName(QStringLiteral("Candy"));
        Candy->setGeometry(QRect(160, 20, 61, 31));
        chocolate = new QRadioButton(centralWidget);
        chocolate->setObjectName(QStringLiteral("chocolate"));
        chocolate->setGeometry(QRect(100, 90, 121, 20));
        jelly = new QRadioButton(centralWidget);
        jelly->setObjectName(QStringLiteral("jelly"));
        jelly->setGeometry(QRect(100, 110, 121, 20));
        gum = new QRadioButton(centralWidget);
        gum->setObjectName(QStringLiteral("gum"));
        gum->setGeometry(QRect(100, 130, 121, 20));
        money = new QLineEdit(centralWidget);
        money->setObjectName(QStringLiteral("money"));
        money->setGeometry(QRect(110, 180, 113, 20));
        label_4 = new QLabel(centralWidget);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(30, 180, 71, 16));
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 265, 21));
        menu = new QMenu(menuBar);
        menu->setObjectName(QStringLiteral("menu"));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        menuBar->addAction(menu->menuAction());

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0));
        start->setText(QApplication::translate("MainWindow", "\320\241\321\202\320\260\321\200\321\202", 0));
        label_2->setText(QApplication::translate("MainWindow", "\320\232\320\276\320\273\320\270\321\207\320\265\321\201\321\202\320\262\320\276", 0));
        label_3->setText(QApplication::translate("MainWindow", "\320\222\320\270\320\264", 0));
        coins->setText(QApplication::translate("MainWindow", "\320\241\320\264\320\260\321\207\320\260", 0));
        Candy->setText(QApplication::translate("MainWindow", "\320\237\320\276\320\273\321\203\321\207\320\270\321\202\321\214", 0));
        chocolate->setText(QApplication::translate("MainWindow", "\320\250\320\276\320\272\320\276\320\273\320\260\320\264\320\275\320\260\321\217 7 \320\263\321\200\320\275.", 0));
        jelly->setText(QApplication::translate("MainWindow", "\320\226\320\265\320\273\320\265\320\271\320\275\320\260\321\217 5 \320\263\321\200\320\275.", 0));
        gum->setText(QApplication::translate("MainWindow", "\320\226\320\265\320\262\320\260\321\202\320\265\320\273\321\214\320\275\320\260\321\217 3 \320\263\321\200\320\275.", 0));
        label_4->setText(QApplication::translate("MainWindow", " \320\222\320\260\321\210\320\270 \320\264\320\265\320\275\321\214\320\263\320\270", 0));
        menu->setTitle(QApplication::translate("MainWindow", "\320\220\320\262\321\202\320\276\320\274\320\260\321\202 \320\277\320\276 \320\277\321\200\320\276\320\264\320\260\320\266\320\265 \320\272\320\276\320\275\321\204\320\265\321\202 ", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
