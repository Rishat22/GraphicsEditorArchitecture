#ifndef GUIAPPLICATIONS_H
#define GUIAPPLICATIONS_H
#include "graphics_view.h"

class MainWindow
{
public:
    MainWindow();
    void show();
	void doSomeCommands();
private:
	GraphicsView m_graphicsView;
};

#endif // GUIAPPLICATIONS_H
