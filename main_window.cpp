#include "main_window.h"
#include <thread>

MainWindow::MainWindow()
{
}

void MainWindow::show()
{
	while (true)
	{
		printActions();
		const auto actionId = selectAction();
		doAction(actionId);
	}
}

void MainWindow::printActions()
{
	std::cout << "Select an action (1-N): " << std::endl;
	std::cout << "1 - Change size" << std::endl;
}

int MainWindow::selectAction()
{
	int actionId;
	std::cin >> actionId;
	return actionId;
}

void MainWindow::doAction(const int actionId)
{
	try {
		switch (actionId)
		{
			case 1 :
			{
				resizeGraphicsView();
				break;
			}
			default : throw std::invalid_argument( "Bad input data" ); break;
		}
	}
	catch (const std::exception& exception)
	{
		std::cin.clear();
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		std::cout << exception.what() << std::endl;
	}
}

void MainWindow::resizeGraphicsView()
{
	std::cout << "Set a new size for Widget: ";
	ushort new_width, new_height = 0;
	std::cin >> new_width >> new_height;
	if(!std::cin.good())
	{
		throw std::invalid_argument( "Bad input data" );
	}
	m_graphicsView.resize(new_width, new_height);
}


