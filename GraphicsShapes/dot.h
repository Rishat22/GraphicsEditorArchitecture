#ifndef DOT_H
#define DOT_H
#include "graphics_shape.h"

class Dot : public GraphicsShape
{
public:
    Dot() = default;
    virtual ~Dot() = default;
	void draw() override;
private:
};

#endif // DOT_H
