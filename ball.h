#ifndef BALL_H
#define BALL_H

#include<QGraphicsEllipseItem>

class Ball: public QGraphicsEllipseItem
{
public:
    Ball();
public slots:
    void move();
};

#endif // BALL_H