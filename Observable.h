#ifndef OBSERVABLE_H
#define OBSERVABLE_H
#include <vector>
#include <memory>
#include "graphics_view.h"
class Observable {
public:
    virtual void setView(std::shared_ptr<GraphicsView>&) = 0;
};
#endif // OBSERVABLE_H
