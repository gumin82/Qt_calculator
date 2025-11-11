#include "qt_calculator.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Qt_calculator w;
    w.show();
    w.setWindowTitle("計算機");
    return a.exec();
}
