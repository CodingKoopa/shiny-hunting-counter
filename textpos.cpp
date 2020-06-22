#include "counter.h"
#include "ui_counter.h"

//x spin box
void Counter::on_xBox_valueChanged(int arg1)
{
    //set new x pos
    x = arg1;

    //refresh
    update();
}

void Counter::on_yBox_valueChanged(int arg1)
{
    //set new y pos
    y = arg1;

    //refresh
    update();
}

//arrow buttons
void Counter::on_up_clicked()
{
    //decrement y
    y--;

    //update spinbox
    ui->yBox->setValue(y);

    //refresh
    update();
}

void Counter::on_left_clicked()
{
    //decrement x
    x--;

    //update spinbox
    ui->xBox->setValue(x);

    //refresh
    update();
}

void Counter::on_right_clicked()
{
    //increment x
    x++;

    //update spinbox
    ui->xBox->setValue(x);

    //refresh
    update();
}

void Counter::on_down_clicked()
{
    //increment y
    y++;

    //update spinbox
    ui->yBox->setValue(y);

    //refresh
    update();
}
