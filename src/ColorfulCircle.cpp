#include "ColorfulCircle.h"

ColorfulCircle::ColorfulCircle(QWidget* parent): QWidget(parent){
    setSizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
    mCurrentCircle = mGreenCircle = QPixmap("..\\green.png");
    mYellowCircle = QPixmap("..\\yellow.png");
    mRedCircle = QPixmap("..\\red.png");
    setGeometry(mCurrentCircle.rect());
}

void ColorfulCircle::paintEvent(QPaintEvent *e) {
    QPainter p(this);
    p.drawPixmap(e->rect(), mCurrentCircle);
}

QSize ColorfulCircle::minimumSizeHint() const {
    return {100, 100};
}

void ColorfulCircle::setYellow(){
    mCurrentCircle = mYellowCircle;
    update();
}

void ColorfulCircle::setGreen(){
    mCurrentCircle = mGreenCircle;
    update();
}

void ColorfulCircle::setRed(){
    mCurrentCircle = mRedCircle;
    update();
}