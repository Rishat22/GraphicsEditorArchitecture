#ifndef RECTANGLE_H
#define RECTANGLE_H
#include "graphics_shape.h"

class Rectangle : public GraphicsShape
{
public:
    Rectangle() = default;
    virtual ~Rectangle() = default;
	void draw() override;
private:
};

#endif // RECTANGLE_H
