#pragma once
#include <QWidget>
#include <QPainter>
#include <QPaintEvent>

class ColorfulCircle: public QWidget{
    Q_OBJECT
public:
    ColorfulCircle() = default;
    ColorfulCircle(QWidget* parent);
    void setYellow();
    void setGreen();
    void setRed();
    QSize minimumSizeHint() const override;
    void paintEvent(QPaintEvent* e) override;
private:
    QPixmap mYellowCircle;
    QPixmap mGreenCircle;
    QPixmap mRedCircle;
    QPixmap mCurrentCircle;
};
