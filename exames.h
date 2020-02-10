#ifndef EXAMES_H
#define EXAMES_H

#include <QDialog>
#include "req.h"

namespace Ui {
class exames;
}

class exames : public QDialog
{
    Q_OBJECT

public:
    explicit exames(int id, QWidget *parent = nullptr);
    ~exames();

private slots:
    void on_pushButton_2_clicked();

    void on_pushButton_clicked();

private:
    Ui::exames *ui;
    int id;
};

#endif // EXAMES_H
