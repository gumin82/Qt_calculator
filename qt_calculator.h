#ifndef QT_CALCULATOR_H
#define QT_CALCULATOR_H

#include <QWidget>

QT_BEGIN_NAMESPACE
namespace Ui {
class Qt_calculator;
}
QT_END_NAMESPACE

class Qt_calculator : public QWidget
{
    Q_OBJECT

public:
    Qt_calculator(QWidget *parent = nullptr);
    ~Qt_calculator();

private:
    Ui::Qt_calculator *ui;
};
#endif // QT_CALCULATOR_H
