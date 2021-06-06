#include "graphics_editor_controller.h"

GraphicsEditorController::GraphicsEditorController(const GraphicsEditorModel& graphicsModel, const GraphicsView& graphicsView)
	:	m_graphicsModel(std::make_unique<GraphicsEditorModel>(graphicsModel))
	,	m_graphicsView(std::make_unique<GraphicsView>(graphicsView))
{

}

void GraphicsEditorController::updateView()
{
	m_graphicsView->drawItems();
}

