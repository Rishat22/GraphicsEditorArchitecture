#include "graphics_view.h"
#include <thread>

const unsigned int FREQ_OF_GRAPHICS_UPDATE_TIME = 60;

GraphicsView::GraphicsView()
{
	timerStart(FREQ_OF_GRAPHICS_UPDATE_TIME);
}

void GraphicsView::timerStart(unsigned int interval)
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
	for(const auto& item : m_items)
	{
		item->paint();
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
