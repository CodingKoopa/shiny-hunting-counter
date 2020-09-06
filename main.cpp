#include <QApplication>

#include "counter.h"

int main(int argc, char *argv[])
{
    // program init
    QApplication program(argc, argv);

    // show counter window
    Counter counterWindow;
    counterWindow.show();

    // run
    return program.exec();
}
