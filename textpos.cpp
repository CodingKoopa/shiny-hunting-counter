#include "counterwindow.h"
#include "ui_counterwindow.h"

//x spin box
void CounterWindow::on_xBox_valueChanged(int arg1)
{
    //set new x pos
    x = arg1;

    //refresh
    update();
}

void CounterWindow::on_yBox_valueChanged(int arg1)
{
    //set new y pos
    y = arg1;

    //refresh
    update();
}

//arrow buttons
void CounterWindow::on_up_clicked()
{
    //decrement y
    y--;

    //update spinbox
    ui->yBox->setValue(y);

    //refresh
    update();
}

void CounterWindow::on_left_clicked()
{
    //decrement x
    x--;

    //update spinbox
    ui->xBox->setValue(x);

    //refresh
    update();
}

void CounterWindow::on_right_clicked()
{
    //increment x
    x++;

    //update spinbox
    ui->xBox->setValue(x);

    //refresh
    update();
}

void CounterWindow::on_down_clicked()
{
    //increment y
    y++;

    //update spinbox
    ui->yBox->setValue(y);

    //refresh
    update();
}
