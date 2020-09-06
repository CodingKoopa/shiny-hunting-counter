#include "counter.h"

#include <QColorDialog>

// solid color
void Counter::on_pickSolidColor_clicked()
{
    // open color window
    solidColor = QColorDialog::getColor(Qt::black, this);
}

void Counter::on_solidBox_clicked()
{
    // refresh
    update();
}
