#include <thread>
#include "graphics_model.h"
#include "graphics_view.h"

GraphicsView::GraphicsView()
{
}

void GraphicsView::drawItems(std::vector<std::shared_ptr<GraphicsShape> >& shapes)
{
	for(const auto &shape : shapes)
	{
		shape->draw();
	}
}

ushort GraphicsView::width() const
{
	return m_viewRect.width();
}

ushort GraphicsView::height() const
{
	return m_viewRect.height();
}

Rect GraphicsView::graphicsRect() const
{
	return m_viewRect;
}

void GraphicsView::resize(const ushort width, const ushort height)
{
	m_viewRect.setWidth(width);
	m_viewRect.setHeight(height);
}
