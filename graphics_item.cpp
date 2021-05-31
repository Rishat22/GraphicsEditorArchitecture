#include "graphics_item.h"

GraphicsItem::GraphicsItem()
{

}

void GraphicsItem::setColor(const Color& color)
{
	m_color = color;
}

Rect GraphicsItem::boundingRect() const
{
	return m_boundingRect;
}

void GraphicsItem::paint()
{

}
