#ifndef DADOSDEHEMODIALISE_H
#define DADOSDEHEMODIALISE_H

#include <QDialog>

namespace Ui {
class DadosDeHemodialise;
}

class DadosDeHemodialise : public QDialog
{
    Q_OBJECT

public:
    explicit DadosDeHemodialise(QWidget *parent = 0);
    ~DadosDeHemodialise();

private slots:
    void on_pushButton_Cancelar_clicked();

private:
    Ui::DadosDeHemodialise *ui;
};

#endif // DADOSDEHEMODIALISE_H
