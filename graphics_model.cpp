#include "graphics_model.h"
#include <algorithm>

void GraphicsModel::setView(std::shared_ptr<GraphicsView>& view)
{
	m_graphicsViews.push_back(view);
}

void GraphicsModel::addShape(const std::shared_ptr<GraphicsShape>& shape)
{
	m_shapes.push_back(shape);
	notify();
}

void GraphicsModel::removeShape(const std::shared_ptr<GraphicsShape>& shape)
{
	const auto iter = std::find(m_shapes.begin(), m_shapes.end(), shape);
	if(iter != m_shapes.end())
		m_shapes.emplace(iter);
	notify();
}

void GraphicsModel::notify()
{
	for (const auto& wGraphicsView : m_graphicsViews) {
		auto graphicsView = wGraphicsView.lock();
		if(!graphicsView)
			continue; // or erase
		graphicsView->drawItems(m_shapes);
	}

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
