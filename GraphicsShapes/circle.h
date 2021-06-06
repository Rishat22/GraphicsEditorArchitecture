#ifndef CIRCLE_H
#define CIRCLE_H
#include "graphics_shape.h"

class Circle : public GraphicsShape
{
public:
    Circle() = default;
    virtual ~Circle() = default;
	void draw() override;
private:
};

#endif // CIRCLE_H
