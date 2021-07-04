#include "graphics_controller.h"

GraphicsController::GraphicsController(const std::shared_ptr<GraphicsModel>& graphicsModel, const std::shared_ptr<GraphicsView>& graphicsView)
	:	m_graphicsModel(graphicsModel)
	,	m_graphicsView(graphicsView)
{
}

void GraphicsController::addShape(const std::shared_ptr<GraphicsShape>& shape)
{
	m_graphicsModel->addShape(shape);
}

void GraphicsController::removeShape(const std::shared_ptr<GraphicsShape>& shape)
{
	m_graphicsModel->removeShape(shape);
}

void GraphicsController::setGraphicsModel(const std::shared_ptr<GraphicsModel>& graphicsModel)
{
	m_graphicsModel = graphicsModel;
}

void GraphicsController::setGraphicsView(const std::shared_ptr<GraphicsView>& graphicsView)
{
	m_graphicsView = graphicsView;
}

