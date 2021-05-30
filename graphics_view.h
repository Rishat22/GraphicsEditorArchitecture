#ifndef GRAPHICSVIEW_H
#define GRAPHICSVIEW_H
#include <vector>
#include "rect.h"

//class IItem;

class GraphicsView
{
public:
    GraphicsView();
    ushort width() const;
    ushort height() const;
    Rect graphicsRect() const;
    virtual void resize(const ushort width, const ushort height);
private:
    void timerStart(unsigned int interval);
    virtual void drawItems();
private:
    Rect m_graphicsRect;
//    std::vector<IItem> m_items;
};

#endif // GRAPHICSVIEW_H
