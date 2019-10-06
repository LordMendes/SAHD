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
    explicit LeituraMenu(QWidget *parent = nullptr);
    ~LeituraMenu();

private:
    Ui::LeituraMenu *ui;
};

#endif // LEITURAMENU_H
