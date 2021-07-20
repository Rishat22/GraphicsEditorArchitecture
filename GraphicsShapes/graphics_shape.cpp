#include "graphics_shape.h"

void GraphicsShape::setColor(const Color& color)
{
	m_color = color;
}

Rect GraphicsShape::boundingRect() const
{
	return m_boundingRect;
}
