#include "counterwindow.h"
#include "ui_counterwindow.h"

//x spin box
void CounterWindow::on_xBox_valueChanged(int arg1)
{
    x = arg1;
    update();
}

void CounterWindow::on_yBox_valueChanged(int arg1)
{
    y = arg1;
    update();
}

//arrow buttons
void CounterWindow::on_up_clicked()
{
    y--;
    update();
    ui->yBox->setValue(y);
}

void CounterWindow::on_left_clicked()
{
    x--;
    update();
    ui->xBox->setValue(x);
}

void CounterWindow::on_right_clicked()
{
    x++;
    update();
    ui->xBox->setValue(x);
}

void CounterWindow::on_down_clicked()
{
    y++;
    update();
    ui->yBox->setValue(y);
}
