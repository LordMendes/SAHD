#ifndef LEITURAUSER_H
#define LEITURAUSER_H

#include <QDialog>
#include <QJsonDocument>
#include "req.h"

namespace Ui {
class LeituraUser;
}

class LeituraUser : public QDialog
{
    Q_OBJECT

public:
    explicit LeituraUser(QWidget *parent = nullptr);
    ~LeituraUser();

private slots:
    void on_comboBox_currentTextChanged(const QString &arg1);

    void on_pushButton_clicked();

private:
    Ui::LeituraUser *ui;
    QJsonDocument jsonDoc;
    QJsonDocument qnt;
};

#endif // LEITURAUSER_H
