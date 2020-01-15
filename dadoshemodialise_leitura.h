#ifndef DADOSHEMODIALISE_LEITURA_H
#define DADOSHEMODIALISE_LEITURA_H

#include <QDialog>

namespace Ui {
class dadoshemodialise_leitura;
}

class dadoshemodialise_leitura : public QDialog
{
    Q_OBJECT

public:
    explicit dadoshemodialise_leitura(int id, QWidget *parent = nullptr);
    ~dadoshemodialise_leitura();

private slots:
    void on_groupBox_clicked();

    void on_scrollArea_customContextMenuRequested(const QPoint &pos);

    void on_lineEdit_1Hora_FC_cursorPositionChanged(int arg1, int arg2);

    void on_pushButton_clicked();

private:
    Ui::dadoshemodialise_leitura *ui;
    int id;
};

#endif // DADOSHEMODIALISE_LEITURA_H
