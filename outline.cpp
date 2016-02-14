#include <QColorDialog>

#include "counter.h"
#include "ui_Counter.h"

//outline checkbox
void Counter::on_useOutline_clicked(bool checked)
{
    //if unckecked, grey out width and color
    if (checked == false)
    {
        ui->outlineWidth->setEnabled(false);
        ui->outlineColorChart->setEnabled(false);
    }

    //if checked, ungrey width and color
    if (checked == true)
    {
        ui->outlineWidth->setEnabled(true);
        ui->outlineColorChart->setEnabled(true);
    }

    //refresh
    update();
}

//outline width
void Counter::on_outlineWidth_valueChanged(int arg1)
{
    //set new outline width
    outlineWidth = arg1;

    //refresh
    update();
}

void Counter::on_outlineColorChart_clicked()
{
    //open color window
    outlineColor = QColorDialog::getColor(Qt::black, this);

    //refresh
    update();
}
