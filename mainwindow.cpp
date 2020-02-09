#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QRandomGenerator>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    ui->label_mnozna->setText(QString::number(dzialanie.get_mnozna()));
    ui->label_mnoznik->setText(QString::number(dzialanie.get_mnoznik()));
    ui->label_wynik->setText("");

    ui->pushButton->setEnabled(false);

    ui->label_wynik_dynamic->setText(QString::number(wynik.get_wynik()));

//    ui->label_tabliczka_mnozenia_od_dynamic->setText(QString::number(dzialanie.get_generate_from()));
//    ui->label_tabliczka_mnozenia_do_dynamic->setText(QString::number(dzialanie.get_generate_to()));

    ui->spinBox_poziom_od->setMinimum(2);
    ui->spinBox_poziom_od->setMaximum(8);
    ui->spinBox_poziom_do->setMinimum(6);
    ui->spinBox_poziom_do->setMaximum(14);

    ui->spinBox_poziom_od->setValue(2);
    ui->spinBox_poziom_do->setValue(6);

}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_pokaz_wynik_clicked()
{
    ui->label_wynik->setText(QString::number(dzialanie.get_wynik()));
    ui->pushButton->setEnabled(true);
    ui->pushButton_pokaz_wynik->setEnabled(false);


    int user_wynik{};
    user_wynik = ui->lineEdit_wynik->text().toUInt();
    if(user_wynik != dzialanie.get_wynik())
    {
        ui->lineEdit_wynik->setStyleSheet("background-color: red");
        wynik.subtract_point();
        ui->label_wynik_dynamic->setText(QString::number(wynik.get_wynik()));
        ui->pushButton->setFocus();
    }
    else
    {
        ui->lineEdit_wynik->setStyleSheet("background-color: green");
//        wynik.add_point();
        wynik.add_point(dzialanie);
        ui->label_wynik_dynamic->setText(QString::number(wynik.get_wynik()));
        ui->pushButton->setFocus();
    }

}

void MainWindow::on_pushButton_clicked()
{
    dzialanie.regenerate(poziomzakres);

    ui->label_mnozna->setText(QString::number(dzialanie.get_mnozna()));
    ui->label_mnoznik->setText(QString::number(dzialanie.get_mnoznik()));
    ui->label_wynik->setText("");


    ui->pushButton->setEnabled(false);
    ui->pushButton_pokaz_wynik->setEnabled(true);

//    ui->pushButton_pokaz_wynik->setFocus();
    ui->lineEdit_wynik->setFocus();

    ui->lineEdit_wynik->clear();
    ui->lineEdit_wynik->setStyleSheet("background-color: white");
}



void MainWindow::on_spinBox_poziom_od_valueChanged(int arg1)
{
    poziomzakres.set_poziom_od(arg1);
    if (ui->spinBox_poziom_do->value()  - arg1 < poziomzakres.get_roznica())
        ui->spinBox_poziom_do->setValue(ui->spinBox_poziom_do->value()+1);
}

void MainWindow::on_spinBox_poziom_do_valueChanged(int arg1)
{
    poziomzakres.set_poziom_do(arg1);
    if( arg1 - ui->spinBox_poziom_od->value() < poziomzakres.get_roznica() )
        ui->spinBox_poziom_od->setValue(ui->spinBox_poziom_od->value()-1);
}

void MainWindow::on_lineEdit_wynik_returnPressed()
{

    MainWindow::on_pushButton_pokaz_wynik_clicked();
}
