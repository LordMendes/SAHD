#ifndef LEITURAPACIENTE_H
#define LEITURAPACIENTE_H

#include <QDialog>

namespace Ui {
class LeituraPaciente;
}

class LeituraPaciente : public QDialog
{
    Q_OBJECT

public:
    explicit LeituraPaciente(QWidget *parent = nullptr);
    ~LeituraPaciente();

private:
    Ui::LeituraPaciente *ui;
};

#endif // LEITURAPACIENTE_H
