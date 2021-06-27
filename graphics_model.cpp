#include "graphics_model.h"
#include <algorithm>

void GraphicsModel::addShape(const std::shared_ptr<GraphicsShape>& shape)
{
	m_shapes.push_back(shape);
}

void GraphicsModel::removeShape(const std::shared_ptr<GraphicsShape>& shape)
{
	const auto iter = std::find(m_shapes.begin(), m_shapes.end(), shape);
	if(iter != m_shapes.end())
		m_shapes.emplace(iter);
}

std::shared_ptr<GraphicsShape> GraphicsModel::GetShape(const ushort index)
{
	return m_shapes.at(index);
}

ushort GraphicsModel::itemsCount()
{
	return m_shapes.size();
}

void GraphicsModel::loadFile(const std::string& fname)
{
	m_fileHandling.loadFile(fname);
	m_shapes = m_fileHandling.getShapes();
}

void GraphicsModel::saveFile(const std::string& fname)
{
	m_fileHandling.setShapes(m_shapes);
	m_fileHandling.saveAs(fname);
}
