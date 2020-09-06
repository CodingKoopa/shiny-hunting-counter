#include <QColorDialog>

#include "gradient.h"

// when gradient radio button is checked
void Counter::on_gradientBox_clicked()
{
    // refresh
    update();
}

// generate gradient
QBrush makeGradient(int x, int y, int transitionPoint, QColor gradColor1, QColor gradColor2)
{
    // make the gradient
    QLinearGradient gradient(x, y, x, transitionPoint);
    gradient.setColorAt(0, gradColor1);
    gradient.setColorAt(1, gradColor2);

    // make and return pattern based off of gradient
    QBrush pattern(gradient);
    return pattern;
}

// gradient color 1
void Counter::on_pickGradColor1_clicked()
{
    // open color window
    gradColor1 = QColorDialog::getColor(Qt::black, this);
}

// gradient color 2
void Counter::on_pickGradColor2_clicked()
{
    // open color window
    gradColor2 = QColorDialog::getColor(Qt::black, this);
}

// switch button
void Counter::on_switchGradColors_clicked()
{
    // make temporary colors for swapping
    QColor color1Orig;
    QColor color2Orig;
    color1Orig = gradColor1;
    color2Orig = gradColor2;

    // do the swap
    gradColor1 = color2Orig;
    gradColor2 = color1Orig;

    // refresh
    update();
}

// gradient spin box
void Counter::on_gradTransPoint_valueChanged(int arg1)
{
    // refresh
    update();
}
