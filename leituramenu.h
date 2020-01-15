#ifndef LEITURAMENU_H
#define LEITURAMENU_H

#include <QDialog>

namespace Ui {
class LeituraMenu;
}

class LeituraMenu : public QDialog
{
    Q_OBJECT

public:
    explicit LeituraMenu(int id, QWidget *parent = nullptr);
    ~LeituraMenu();

private slots:
    void on_infeccao_clicked();

    void on_pushButton_14_clicked();

    void on_dadosclinicos_clicked();

    void on_eventosadv_clicked();

    void on_movimentacao_clicked();

    void on_acessoatual_clicked();

    void on_hospta_clicked();

private:
    Ui::LeituraMenu *ui;
    int id;
};

#endif // LEITURAMENU_H
