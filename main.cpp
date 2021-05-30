#include <iostream>
#include "main_window.h"


int main()
{
	MainWindow main_window;
	main_window.show();

//	while (true) {
//		std::cout << "Next" << std::endl;
//		try {
//			int new_width, new_height;
//			std::cin >> new_width >> new_height;
//			if(!std::cin.good())
//			{
//				throw std::invalid_argument( "received negative value" );
//			}
////			std::cout << new_width << new_height << std::endl;
////			new_width++;
////			std::cout << new_width << new_height << std::endl;
//		}  catch (...) {
//			std::cin.clear();
//			std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
//		}
//	}

	return 0;
}
