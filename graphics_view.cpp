#include "graphics_view.h"

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

void GraphicsView::drawItem(const GraphicsShape* shape)
{
	shape->draw();
}

void GraphicsView::resize(const ushort width, const ushort height)
{
	m_viewRect.setWidth(width);
	m_viewRect.setHeight(height);
}
