#include <QColorDialog>

#include "counterwindow.h"
#include "ui_counterwindow.h"

//outline checkbox
void CounterWindow::on_useOutline_clicked(bool checked)
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
void CounterWindow::on_outlineWidth_valueChanged(int arg1)
{
    //set new outline width
    outlineWidth = arg1;

    //refresh
    update();
}

void CounterWindow::on_outlineColorChart_clicked()
{
    //open color window
    color = QColorDialog::getColor(Qt::black, this);

    //refresh
    update();
}
