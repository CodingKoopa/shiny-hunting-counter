#include "counterwindow.h"

#include <QColorDialog>

//solid color
void CounterWindow::on_pickSolidColor_clicked()
{
    //open color window
    solidColor = QColorDialog::getColor(Qt::black, this);
}

void CounterWindow::on_solidBox_clicked()
{
    //refresh
    update();
}
