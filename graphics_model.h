#ifndef GRAPHICSEDITORMODEL_H
#define GRAPHICSEDITORMODEL_H
#include <vector>
#include <memory>
#include "GraphicsShapes/graphics_shape.h"
#include "Data/file_handling_visitor.h"
#include "Observable.h"

class GraphicsModel : public Observable
{
public:
	GraphicsModel() = default;
	void setView(std::shared_ptr<GraphicsView>& view) override;
	void addShape(const std::shared_ptr<GraphicsShape>& shape);
	void removeShape(const std::shared_ptr<GraphicsShape>& shape);
	void notify();
	void loadFile(const std::string& fname);
	void saveFile(const std::string& fname);
private:
	void timerStart(const ushort interval);
private:
	std::vector<std::weak_ptr<GraphicsView>> m_graphicsViews;
    std::vector<std::shared_ptr<GraphicsShape>> m_shapes;
	FileHandlingVisitor m_fileHandling;
};

#endif // GRAPHICSEDITORMODEL_H
