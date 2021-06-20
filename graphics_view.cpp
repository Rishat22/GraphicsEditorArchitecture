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

void GraphicsView::SetModel(const std::shared_ptr<GraphicsModel>& model)
{
	m_graphicsModel = model;
}

//void GraphicsView::SetController(const std::shared_ptr<GraphicsController>& controller)
//{
//	m_graphicsController = controller;
//}

void GraphicsView::drawItems()
{
	auto graphicsModel = m_graphicsModel.lock();
	if(!graphicsModel)
		return;
	for(auto shape_index = 0; shape_index < graphicsModel->itemsCount(); shape_index++)
	{
		auto shape = graphicsModel->GetShape(shape_index);
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
