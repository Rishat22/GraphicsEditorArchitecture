#ifndef GRAPHICSVIEW_H
#define GRAPHICSVIEW_H
#include <vector>
#include <memory>
#include "rect.h"
#include "GraphicsShapes/graphics_shape.h"

class GraphicsView
{
public:
	GraphicsView() = default;
    ushort width() const;
    ushort height() const;
    Rect graphicsRect() const;
	virtual void drawItem(const GraphicsShape* shape);
    virtual void resize(const ushort width, const ushort height);
private:
	Rect m_viewRect;
};

#endif // GRAPHICSVIEW_H
