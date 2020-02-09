#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "dzialanie.h"
#include "wynik.h"
#include "poziomzakres.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

    Wynik wynik{};
    PoziomZakres poziomzakres{};
    Dzialanie dzialanie{poziomzakres};

private slots:
    void on_pushButton_pokaz_wynik_clicked();

    void on_pushButton_clicked();

    void on_spinBox_poziom_od_valueChanged(int arg1);

    void on_spinBox_poziom_do_valueChanged(int arg1);

    void on_lineEdit_wynik_returnPressed();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
