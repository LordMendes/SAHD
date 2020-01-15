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
    explicit controledereuso(QWidget *parent = nullptr);
    ~controledereuso();

private:
    Ui::controledereuso *ui;
};

#endif // CONTROLEDEREUSO_H
