#ifndef OBSERVER_H
#define OBSERVER_H
#include <vector>
#include <memory>
#include "GraphicsShapes/graphics_shape.h"
class Observer {
public:
    virtual void drawItems(std::vector<std::shared_ptr<GraphicsShape>>&) = 0;
};
#endif // OBSERVER_H
