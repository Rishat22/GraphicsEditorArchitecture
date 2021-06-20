#ifndef POINT_H
#define POINT_H
#include <iostream>

class Point
{

public:
    Point();
    Point(const ushort posX, const ushort posY);

    ushort posX() const;
    ushort posY() const;
    void setPosY(const ushort& posY);
    void setPosX(const ushort& posX);

private:
    ushort m_posX;
    ushort m_posY;
};

#endif // POINT_H
