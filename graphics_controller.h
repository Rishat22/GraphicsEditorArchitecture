#ifndef GRAPHICSEDITORCONTROLLER_H
#define GRAPHICSEDITORCONTROLLER_H
#include "graphics_model.h"
#include "graphics_view.h"

class GraphicsController
{
public:
	GraphicsController() = default;
	GraphicsController(const std::shared_ptr<GraphicsModel>& graphicsModel, const std::shared_ptr<GraphicsView>& graphicsView);

	void addShape(const std::shared_ptr<GraphicsShape>& shape);
	void removeShape(const std::shared_ptr<GraphicsShape>& shape);

	void setGraphicsModel(const std::shared_ptr<GraphicsModel>& graphicsModel);
	void setGraphicsView(const std::shared_ptr<GraphicsView>& graphicsView);

private:
	std::shared_ptr<GraphicsModel> m_graphicsModel;
	std::shared_ptr<GraphicsView> m_graphicsView;
};

#endif // GRAPHICSEDITORCONTROLLER_H
