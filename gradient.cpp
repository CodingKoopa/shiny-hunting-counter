#include <QColorDialog>
#include <QDebug>

#include "gradient.h"

//when gradient radio button is checked
void CounterWindow::on_gradientBox_clicked()
{
    //refresh
    update();
}

//generate gradient
QBrush makeGradient(int x, int y, int transitionPoint, QColor gradColor1, QColor gradColor2)
{
    //make the gradient
    QLinearGradient gradient(x, y, x, transitionPoint);
    gradient.setColorAt(0, gradColor1);
    gradient.setColorAt(1, gradColor2);

    //make pattern based off of gradient
    QBrush pattern(gradient);
    return pattern;
}

void CounterWindow::on_pickGradColor1_clicked()
{
    gradColor1 = QColorDialog::getColor(Qt::black, this);
    qDebug() << gradColor1.name();
}

void CounterWindow::on_pickGradColor2_clicked()
{
    gradColor2 = QColorDialog::getColor(Qt::black, this);
}

void CounterWindow::on_gradTransPoint_valueChanged(int arg1)
{
    //refresh
    update();
}

void CounterWindow::on_switchGradColors_clicked()
{
    //make temporary colors for swapping
    QColor color1Orig;
    QColor color2Orig;
    color1Orig = gradColor1;
    color2Orig = gradColor2;

    //do the swap
    gradColor1 = color2Orig;
    gradColor2 = color1Orig;

    update();
}
