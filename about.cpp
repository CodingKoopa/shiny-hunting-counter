#include "about.h"
#include "ui_about.h"

About::About(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::About)
{
    // setup about ui
    ui->setupUi(this);

    this->setWindowTitle("About");
}

About::~About()
{
    delete ui;
}
