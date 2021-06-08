#ifndef VISITOR_H
#define VISITOR_H
#include "../GraphicsShapes/dot.h"
#include "../GraphicsShapes/circle.h"
#include "../GraphicsShapes/rectangle.h"

class Visitor
{
public:
    Visitor() = default;
    virtual void visitDot(const Dot* dot) = 0;
    virtual void visitCircle(const Circle* circle) = 0;
    virtual void visitRectangle(const Rectangle* rectangle) = 0;
};

#endif // VISITOR_H
