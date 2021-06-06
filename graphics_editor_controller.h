#ifndef GRAPHICSEDITORCONTROLLER_H
#define GRAPHICSEDITORCONTROLLER_H
#include "graphics_view.h"
#include "graphics_editor_model.h"

class GraphicsEditorController
{
public:
	GraphicsEditorController(const GraphicsEditorModel& graphicsModel, const GraphicsView& graphicsView);
	void updateView();

private:
	std::unique_ptr<GraphicsEditorModel> m_graphicsModel;
	std::unique_ptr<GraphicsView> m_graphicsView;
};

#endif // GRAPHICSEDITORCONTROLLER_H
