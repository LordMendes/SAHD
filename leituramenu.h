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
    void on_pushButton_3_clicked();

private:
    Ui::LeituraMenu *ui;
};

#endif // LEITURAMENU_H
