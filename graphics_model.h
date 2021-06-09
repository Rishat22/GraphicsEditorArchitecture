#ifndef GRAPHICSEDITORMODEL_H
#define GRAPHICSEDITORMODEL_H
#include <vector>
#include <memory>
#include "GraphicsShapes/graphics_shape.h"

class GraphicsModel
{
public:
    GraphicsModel();
	virtual void drawItems();
private:
	void timerStart(const ushort interval);

private:
    std::vector<std::shared_ptr<GraphicsShape>> m_shapes;
};

#endif // GRAPHICSEDITORMODEL_H
