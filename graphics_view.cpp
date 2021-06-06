#include "graphics_view.h"
#include <thread>

GraphicsView::GraphicsView()
{
	const ushort time_freq_update = 60;
	timerStart(time_freq_update);
}

void GraphicsView::timerStart(const ushort interval)
{
	std::thread([this, interval]()
	{
		while (true)
		{
			drawItems();
			std::this_thread::sleep_for(std::chrono::milliseconds(interval));
		}
	}).detach();
}

void GraphicsView::drawItems()
{
	for(const auto& shape : m_shapes)
	{
		shape->draw();
	}
}

ushort GraphicsView::width() const
{
	return m_graphicsRect.width();
}

ushort GraphicsView::height() const
{
	return m_graphicsRect.height();
}

Rect GraphicsView::graphicsRect() const
{
	return m_graphicsRect;
}

void GraphicsView::resize(const ushort width, const ushort height)
{
	m_graphicsRect.setWidth(width);
	m_graphicsRect.setHeight(height);
}
