#ifndef CADASTROUSER_H
#define CADASTROUSER_H

#include <QDialog>
#include "req.h"

namespace Ui {
class cadastroUser;
}

class cadastroUser : public QDialog
{
    Q_OBJECT

public:
    explicit cadastroUser(QWidget *parent = nullptr);
    ~cadastroUser();

private slots:
    void on_pushButton_2_clicked();

private:
    Ui::cadastroUser *ui;
};

#endif // CADASTROUSER_H
