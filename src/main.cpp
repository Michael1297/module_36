#include <QApplication>
#include <QSlider>
#include <QSpinBox>
#include <QVBoxLayout>
#include "ColorfulCircle.h"

int main(int argc, char* argv[]) {
    QApplication app(argc, argv);
    auto* window = new QWidget;
    auto* layout = new QVBoxLayout(window);
    auto* slider = new QSlider(Qt::Horizontal, window);
    auto* circle = new ColorfulCircle(window);
    window->setFixedSize(200, 250);
    layout->addWidget(circle);
    layout->addWidget(slider);
    slider->setMinimum(0);
    slider->setMaximum(100);
    QObject::connect(slider, &QSlider::valueChanged, circle, [&slider, &circle](int newValue){
        if (newValue <= 33) circle->setGreen();
        else if (newValue <= 66) circle->setYellow();
        else circle->setRed();
    });

    window->show();
    QApplication::exec();
}
