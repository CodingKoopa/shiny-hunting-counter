#ifndef Counter_H
#define Counter_H

#include <QMainWindow>
#include <string.h>
#include <fstream>
namespace Ui {
class Counter;
}

class Counter : public QMainWindow
{
    Q_OBJECT

public:
    explicit Counter(QWidget *parent = 0);
    ~Counter();

private:
    Ui::Counter *ui;
    int font;
    int x;
    int y;

    int count;

    int outlineWidth;

    QColor outlineColor;

    QColor solidColor;

    QColor gradColor1;
    QColor gradColor2;

    std::string formatComma(int value);

    void saveCount(int value);

    int loadCount();

protected:
    void paintEvent(QPaintEvent *event);

private slots:   
    // textpos.cpp:
    void on_xBox_valueChanged(int arg1);
    void on_yBox_valueChanged(int arg1);

    void on_up_clicked();
    void on_left_clicked();
    void on_right_clicked();
    void on_down_clicked();

    // gradient.cpp:
    void on_gradientBox_clicked();
    void on_pickGradColor1_clicked();
    void on_pickGradColor2_clicked();
    void on_switchGradColors_clicked();
    void on_gradTransPoint_valueChanged(int arg1);

    // outline.cpp:
    void on_useOutline_clicked(bool checked);
    void on_outlineColorChart_clicked();
    void on_outlineWidth_valueChanged(int arg1);

    // solid.cpp:
    void on_pickSolidColor_clicked();
    void on_solidBox_clicked();

    // font.cpp:
    void on_font_currentIndexChanged(const QString &arg1);
    void on_fontSize_valueChanged(int arg1);

    // encounter.cpp:
    void on_encounterButton_clicked();
    void on_encounterBox_valueChanged(int arg1);

    // counter.cpp:
    void on_aboutButton_clicked();
};

#endif // Counter_H
