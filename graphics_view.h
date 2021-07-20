#ifndef GRAPHICSVIEW_H
#define GRAPHICSVIEW_H
#include <vector>
#include <memory>
#include "rect.h"
#include "GraphicsShapes/graphics_shape.h"
#include "Observer.h"

class GraphicsModel;

class GraphicsView : public Observer
{
public:
	GraphicsView();
    ushort width() const;
    ushort height() const;
	Rect graphicsRect() const;
    virtual void resize(const ushort width, const ushort height);
	virtual void drawItems(std::vector<std::shared_ptr<GraphicsShape> >& shapes) override;
private:
//	void timerStart(const ushort interval);
private:
	Rect m_viewRect;
};

#endif // GRAPHICSVIEW_H
