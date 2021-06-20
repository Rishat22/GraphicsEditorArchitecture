#include "graphics_model.h"
#include <algorithm>

void GraphicsModel::addShape(const std::shared_ptr<GraphicsShape>& shape)
{
	m_shapes.push_back(shape);
}

void GraphicsModel::removeShape(const std::shared_ptr<GraphicsShape>& shape)
{
	const auto iter = std::find_if(m_shapes.begin(), m_shapes.end(), [&](std::shared_ptr<GraphicsShape> const& current)
	{
			return current == shape;
	});
	m_shapes.emplace(iter);
}

ushort GraphicsModel::itemsCount()
{
	return m_shapes.size();
}

//ToDo move to this saving and loading file
