#ifndef GRAPHICSITEM_H
#define GRAPHICSITEM_H
#include "rect.h"
#include "color.h"

class GraphicsItem
{
public:
    GraphicsItem();
    void setColor(const Color& color);
    virtual Rect boundingRect(void) const;
    virtual void paint();
private:
    Rect m_boundingRect;
    Color m_color;
};

#endif // GRAPHICSITEM_H
