#ifndef QT_CALCULATOR_H
#define QT_CALCULATOR_H

#include <QWidget>
#include <QLineEdit>
#include <QPushButton>
#include <QGridLayout>
#include <QString>

class Qt_calculator : public QWidget
{
    Q_OBJECT

public:
    Qt_calculator(QWidget *parent = nullptr);
    ~Qt_calculator();
private slots:
    void digitClicked();
    void operatorClicked();
    void equalClicked();
    void clearClicked();
    void backspaceClicked();
    void decimalClicked();

private:
    void createUI();
    QPushButton* createButton(const QString &text, const char* slot);

    QLineEdit *display;
    QString currentNumber;
    QString operand1;
    QString currentOperator;
    bool waitingForOperand;

};
#endif // QT_CALCULATOR_H
