#include "counterwindow.h"

//font selection box
void CounterWindow::on_font_currentIndexChanged(const QString &arg1)
{
    //refresh
    update();
}

//font size box
void CounterWindow::on_fontSize_valueChanged(int arg1)
{
    //refresh
    update();
}
