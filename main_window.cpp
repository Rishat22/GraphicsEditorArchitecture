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
		int actionId;
		std::cin >> actionId;
		doActions(static_cast<int>(actionId));
	}
}

void MainWindow::printActions()
{
	std::cout << "Select an action (1-N): " << std::endl;
	std::cout << "1 - Change size" << std::endl;
}

void MainWindow::doActions(const int actionId)
{
	try {
		switch (actionId)
		{
			case 1 :
			{
				std::cout << "Set a new size for Widget: ";
				ushort new_width, new_height = 0;
				std::cin >> new_width >> new_height;
				if(!std::cin.good())
				{
					throw std::invalid_argument( "Negative value" );
				}
				m_graphicsView.resize(new_width, new_height);
			}
		}
	}
	catch (...)
	{
		std::cin.clear();
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		std::cout << "Bad input data!" << std::endl;
	}
}


