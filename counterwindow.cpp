#include <QPainter>
#include <QPainterPath>
#include <QPainterPathStroker>
#include <QColorDialog>

#include "counterwindow.h"
#include "ui_counterwindow.h"
#include "gradient.h"

CounterWindow::CounterWindow(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::CounterWindow)
{
    ui->setupUi(this);

    QWidget::setWindowIcon(QIcon(":/icon.png"));
    QWidget::setWindowTitle("Shiny Hunting Counter");

    ui->encounterBox->setMaximum(2147483647);
    ui->fontSize->setMaximum(2147483647);
    ui->outlineWidth->setMaximum(2147483647);
    ui->xBox->setMaximum(2147483647);
    ui->yBox->setMaximum(2147483647);
    ui->gradTransPoint->setMaximum(2147483647);

    ui->fontSize->setValue(30);
    ui->xBox->setValue(50);
    ui->yBox->setValue(50);
    ui->outlineWidth->setValue(2);

    count = 0;
    solidColor = Qt::black;

    setWindowFlags(windowFlags() & ~Qt::WindowContextHelpButtonHint);
}

CounterWindow::~CounterWindow()
{
    delete ui;
}

void CounterWindow::paintEvent(QPaintEvent *event)
{
    //make the canvas
    QPainter canvas(this);

    //turn on anti-aliasing (higher quality)
    canvas.setRenderHints(QPainter::Antialiasing, QPainter::HighQualityAntialiasing);

    //make rectangle
    QRect rec(x, y, 250, 150);

    //grab font info
    QFont font = ui->font->currentText();
    font.setPointSize(ui->fontSize->value());

    //make the text path
    QPainterPath textPath;
    textPath.addText(x, y, font, QString::number(count));

    //draw the text
    canvas.drawPath(textPath);

    //set the font
    canvas.setFont(font);

    //gradient
    if(ui->gradientBox->isChecked() == true)
    {
        //fill in the text using the pattern
        canvas.fillPath(textPath, makeGradient(x, y, ui->gradTransPoint->value(), gradColor1, gradColor2));
    }

    //default to solid color
    else
    {
        //make pattern based off of solid color (default is black)
        QBrush pattern(solidColor);

        //fill in the text using the pattern
        canvas.fillPath(textPath, pattern);
    }

    //outline
    if (ui->useOutline->isChecked() == true)
    {
        //make brush
        QBrush brush(color);

        //make stroke path
        QPainterPathStroker outlineStrokePath;
        //set width of stroke path
        outlineStrokePath.setWidth(ui->outlineWidth->value());
        //make path based off of stroke path
        QPainterPath outline(outlineStrokePath.createStroke(textPath));

        QPainterPath finalStroke = outline.subtracted(textPath);

        //fill in the path
        canvas.fillPath(finalStroke, brush);
    }
}

void CounterWindow::on_encounterButton_clicked()
{
    count++;
    ui->encounterBox->setValue(count);
    update();
}

void CounterWindow::on_encounterBox_valueChanged(int arg1)
{
    count = arg1;
    update();
}

void CounterWindow::on_pickSolidColor_clicked()
{
    solidColor = QColorDialog::getColor(Qt::black, this);
}

void CounterWindow::on_solidBox_clicked()
{
    update();
}
