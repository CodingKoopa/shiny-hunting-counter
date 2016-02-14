#include "counter.h"

//font selection box
void Counter::on_font_currentIndexChanged(const QString &arg1)
{
    //we don't need to assign arg1 to anything
    //because the paint event automataclly
    //reads directly to the combo box

    //refresh
    update();
}

//font size box
void Counter::on_fontSize_valueChanged(int arg1)
{
    //refresh
    update();
}
