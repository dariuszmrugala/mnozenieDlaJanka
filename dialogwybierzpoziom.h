#ifndef DIALOGWYBIERZPOZIOM_H
#define DIALOGWYBIERZPOZIOM_H

#include <QDialog>

namespace Ui {
class DialogWybierzPoziom;
}

class DialogWybierzPoziom : public QDialog
{
    Q_OBJECT

public:
    explicit DialogWybierzPoziom(QWidget *parent = nullptr);
    ~DialogWybierzPoziom();

private:
    Ui::DialogWybierzPoziom *ui;
};

#endif // DIALOGWYBIERZPOZIOM_H
