#include "dialogwybierzpoziom.h"
#include "ui_dialogwybierzpoziom.h"

DialogWybierzPoziom::DialogWybierzPoziom(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::DialogWybierzPoziom)
{
    ui->setupUi(this);
}

DialogWybierzPoziom::~DialogWybierzPoziom()
{
    delete ui;
}
