#ifndef GUIAPPLICATIONS_H
#define GUIAPPLICATIONS_H
#include "graphics_view.h"
#include "graphics_model.h"
#include "graphics_controller.h"

class MainWindow
{
public:
    MainWindow();
    void show();
	void doSomeCommands();
private:
	std::shared_ptr<GraphicsView> m_graphicsView;
	std::shared_ptr<GraphicsModel> m_graphicsModel;
	std::shared_ptr<GraphicsController> m_graphicsController;
};

#endif // GUIAPPLICATIONS_H
