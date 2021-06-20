#include "graphics_controller.h"

GraphicsController::GraphicsController(const std::shared_ptr<GraphicsModel>& graphicsModel, const std::shared_ptr<GraphicsView>& graphicsView)
	:	m_graphicsModel(graphicsModel)
	,	m_graphicsView(graphicsView)
{
	m_graphicsView->SetModel(m_graphicsModel);
}

void GraphicsController::setGraphicsModel(const std::shared_ptr<GraphicsModel>& graphicsModel)
{
	m_graphicsModel = graphicsModel;
}

void GraphicsController::setGraphicsView(const std::shared_ptr<GraphicsView>& graphicsView)
{
	m_graphicsView = graphicsView;
}

