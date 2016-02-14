#ifndef GRADIENT_H
#define GRADIENT_H

#include <QBrush>

#include "counter.h"

QBrush makeGradient(int x, int y, int transitionPoint, QColor gradColor1, QColor gradColor2);

#endif // GRADIENT_H
