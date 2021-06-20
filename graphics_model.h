#ifndef GRAPHICSEDITORMODEL_H
#define GRAPHICSEDITORMODEL_H
#include <vector>
#include <memory>
#include "GraphicsShapes/graphics_shape.h"

class GraphicsModel
{
public:
	GraphicsModel() = default;
	void addShape(const std::shared_ptr<GraphicsShape>& shape);
	void removeShape(const std::shared_ptr<GraphicsShape>& shape);
	std::shared_ptr<GraphicsShape> GetShape(const ushort index);
	ushort itemsCount();
private:
	void timerStart(const ushort interval);
private:
    std::vector<std::shared_ptr<GraphicsShape>> m_shapes;
};

#endif // GRAPHICSEDITORMODEL_H
