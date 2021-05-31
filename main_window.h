#ifndef GUIAPPLICATIONS_H
#define GUIAPPLICATIONS_H
#include "graphics_view.h"

class MainWindow
{
public:
    MainWindow();
    void show();
    void printActions();
    int selectAction();
    void doAction(const int actionId);
private:
    void resizeGraphicsView();
private:
    GraphicsView m_graphicsView;
};

#endif // GUIAPPLICATIONS_H
