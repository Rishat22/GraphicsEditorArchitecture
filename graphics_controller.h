#ifndef GRAPHICSEDITORCONTROLLER_H
#define GRAPHICSEDITORCONTROLLER_H
#include "graphics_view.h"
#include "graphics_model.h"

class GraphicsController
{
public:
    GraphicsController() = default;
    GraphicsController(GraphicsModel* graphicsModel, GraphicsView* graphicsView);

    void updateView();

    void setGraphicsModel(const std::shared_ptr<GraphicsModel>& graphicsModel);
    void setGraphicsView(const std::shared_ptr<GraphicsView>& graphicsView);

private:
    std::shared_ptr<GraphicsModel> m_graphicsModel;
    std::shared_ptr<GraphicsView> m_graphicsView;
};

#endif // GRAPHICSEDITORCONTROLLER_H
