#include <QColorDialog>

#include "counterwindow.h"
#include "ui_counterwindow.h"

void CounterWindow::on_outlineWidth_valueChanged(int arg1)
{
    outlineWidth = arg1;
    update();
}

void CounterWindow::on_outlineColorChart_clicked()
{
    color = QColorDialog::getColor(Qt::black, this);
    update();
}

void CounterWindow::on_useOutline_clicked(bool checked)
{
    if (checked == false)
    {
        ui->outlineWidth->setEnabled(false);
        ui->outlineColorChart->setEnabled(false);
    }

    if (checked == true)
    {
        ui->outlineWidth->setEnabled(true);
        ui->outlineColorChart->setEnabled(true);
    }
    update();
}
