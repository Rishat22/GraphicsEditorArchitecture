#include "main_window.h"
#include "Data/file_handling_visitor.h"
#include "Commands/commands.h"
#include "Commands/file_command.h"

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
	FileHandlingVisitor file_handling;
	Commands commands;
	commands.addCommand(
		std::unique_ptr<ICommand>(new LoadFileCommand(m_graphicsModel, "doc.txt"))
	);
	commands.addCommand(
		std::unique_ptr<ICommand>(new SaveAsCommand(m_graphicsModel, "doc.txt"))
	);
	/* ToDo add other commands */
	commands.execute();
}
