#include "graphics_model.h"
#include <thread>

GraphicsModel::GraphicsModel()
{
	const ushort time_freq_update = 60;
	timerStart(time_freq_update);
}
void GraphicsModel::timerStart(const ushort interval)
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

void GraphicsModel::drawItems()
{
	/* ToDo move to Model class */
	for(const auto& shape : m_shapes)
	{
		shape->draw();
	}
}
