#ifndef EVENTOSADVERSOS_H
#define EVENTOSADVERSOS_H

#include <QDialog>

namespace Ui {
class EventosAdversos;
}

class EventosAdversos : public QDialog
{
    Q_OBJECT

public:
    explicit EventosAdversos(QWidget *parent = 0);
    ~EventosAdversos();

private slots:
    void on_pushButton_cancelar_clicked();

    void on_comboBox_evento1_currentTextChanged(const QString &arg1);

    void on_comboBox_evento2_currentTextChanged(const QString &arg1);

    void on_comboBox_evento3_currentTextChanged(const QString &arg1);

    void on_comboBox_evento4_currentTextChanged(const QString &arg1);

private:
    Ui::EventosAdversos *ui;
};

#endif // EVENTOSADVERSOS_H
