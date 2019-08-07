#ifndef CONTROLEDEREUSO_H
#define CONTROLEDEREUSO_H

#include <QDialog>
#include <QMainWindow>

namespace Ui {
class ControleDeReuso;
}

class ControleDeReuso : public QDialog
{
    Q_OBJECT

public:
    explicit ControleDeReuso(QWidget *parent = nullptr);
    ~ControleDeReuso();

private slots:
    void on_pushButton_2_clicked();

private:
    Ui::ControleDeReuso *ui;
};

#endif // CONTROLEDEREUSO_H
