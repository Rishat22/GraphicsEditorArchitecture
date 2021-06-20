#ifndef GRAPHICSVIEW_H
#define GRAPHICSVIEW_H
#include <vector>
#include <memory>
#include "rect.h"
#include "GraphicsShapes/graphics_shape.h"
#include "graphics_model.h"

class GraphicsView
{
public:
	GraphicsView();
    ushort width() const;
    ushort height() const;
	Rect graphicsRect() const;
	void SetModel(const std::shared_ptr<GraphicsModel>& model);
//	void SetController(const std::shared_ptr<GraphicsController>& controller);
    virtual void resize(const ushort width, const ushort height);
	virtual void drawItems();
private:
	void timerStart(const ushort interval);
private:
	std::weak_ptr<GraphicsModel> m_graphicsModel;
//	std::shared_ptr<GraphicsController> m_graphicsController;
	Rect m_viewRect;
};

#endif // GRAPHICSVIEW_H
