#include "main_window.h"
#include "Data/file_handling_visitor.h"
#include "Commands/commands.h"
#include "Commands/file_command.h"

MainWindow::MainWindow()
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
		std::unique_ptr<ICommand>(new LoadFileCommand(&file_handling, "doc.txt"))
	);
	commands.addCommand(
		std::unique_ptr<ICommand>(new SaveAsCommand(&file_handling, "doc.txt"))
	);
	/* ToDo add other commands */
	commands.execute();
}
