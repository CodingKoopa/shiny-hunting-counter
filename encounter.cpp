#include "counterwindow.h"
#include "ui_counterwindow.h"

//buddon
void CounterWindow::on_encounterButton_clicked()
{
    //increment count
    count++;

    //set spinbox value
    ui->encounterBox->setValue(count);

    //refresh
    update();
}

//spinny box
void CounterWindow::on_encounterBox_valueChanged(int arg1)
{
    //set count
    count = arg1;

    //refresh
    update();
}
