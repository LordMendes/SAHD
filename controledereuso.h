#ifndef CONTROLEDEREUSO_H
#define CONTROLEDEREUSO_H

#include <QDialog>

namespace Ui {
class controledereuso;
}

class controledereuso : public QDialog
{
    Q_OBJECT

public:
    explicit controledereuso(int id, QWidget *parent = nullptr);
    ~controledereuso();

private slots:
    void on_pushButton_2_clicked();

    void on_pushButton_clicked();

private:
    Ui::controledereuso *ui;
    int id;
};

#endif // CONTROLEDEREUSO_H
