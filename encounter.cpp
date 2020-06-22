#include "counter.h"
#include "ui_counter.h"

//button
void Counter::on_encounterButton_clicked()
{
    //increment count
    count++;

    //set spinbox value
    ui->encounterBox->setValue(count);

    //refresh
    update();
}

//spin box
void Counter::on_encounterBox_valueChanged(int arg1)
{
    //set count
    count = arg1;

    //refresh
    update();
}
