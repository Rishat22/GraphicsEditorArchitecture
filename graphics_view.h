#ifndef GRAPHICSVIEW_H
#define GRAPHICSVIEW_H
#include <vector>
#include <memory>
#include "rect.h"
#include "graphics_item.h"

class GraphicsView
{
public:
    GraphicsView();
    ushort width() const;
    ushort height() const;
    Rect graphicsRect() const;
    virtual void resize(const ushort width, const ushort height);
private:
    void timerStart(const ushort interval);
    virtual void drawItems();
private:
    Rect m_graphicsRect;
    std::vector<std::shared_ptr<GraphicsItem>> m_items;
};

#endif // GRAPHICSVIEW_H
