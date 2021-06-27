#include "main_window.h"
#include "Data/file_handling_visitor.h"
#include "Commands/commands.h"
#include "Commands/file_command.h"
#include "Commands/shape_command.h"
/* For example */
#include "GraphicsShapes/circle.h"

MainWindow::MainWindow()
	: m_graphicsView(std::make_shared<GraphicsView>())
	, m_graphicsModel(std::make_shared<GraphicsModel>())
	, m_graphicsController(std::make_shared<GraphicsController>(m_graphicsModel, m_graphicsView))
{
}

void MainWindow::show()
{

}

void MainWindow::doSomeCommands()
{
	Commands commands;
	commands.addCommand(
		std::unique_ptr<ICommand>(new LoadFileCommand(m_graphicsModel, "doc.txt"))
	);
	commands.addCommand(
		std::unique_ptr<ICommand>(new SaveAsCommand(m_graphicsModel, "doc.txt"))
	);

	std::shared_ptr<Circle> shape(new Circle(Point(50, 50), 50));
	commands.addCommand(
				std::unique_ptr<ICommand>(new AddShapeCommand(m_graphicsController, shape))
	);
	commands.addCommand(
		std::unique_ptr<ICommand>(new RemoveShapeCommand(m_graphicsController, shape))
	);

	commands.execute();
}
