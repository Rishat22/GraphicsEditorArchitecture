#ifndef GRAPHICSVIEW_H
#define GRAPHICSVIEW_H
#include <vector>
#include <memory>
#include "rect.h"
#include "GraphicsShapes/graphics_shape.h"

class GraphicsView
{
public:
    GraphicsView();
    ushort width() const;
    ushort height() const;
    Rect graphicsRect() const;
    virtual void resize(const ushort width, const ushort height);
	virtual void drawItems();
private:
    void timerStart(const ushort interval);
private:
    Rect m_graphicsRect;
	std::vector<std::shared_ptr<GraphicsShape>> m_shapes;
};

#endif // GRAPHICSVIEW_H
