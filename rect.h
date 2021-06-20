#ifndef RECT_H
#define RECT_H
#include <iostream>
#include "point.h"

class Rect
{

public:
    Rect();
    Rect(ushort left, ushort top, ushort width, ushort height);

    ushort posX() const;
    ushort posY() const;
    ushort width() const;
    ushort height() const;

    void setPosY(const ushort& posY);
    void setPosX(const ushort& posX);
    void setWidth(const ushort& width);
    void setHeight(const ushort& height);

private:
	Point m_pos;
    ushort m_width;
    ushort m_height;
};

#endif // RECT_H
