#ifndef VISITOR_H
#define VISITOR_H
class Dot;
class Circle;
class Rectangle;

class Visitor
{
public:
    Visitor() = default;
    virtual void load(const Dot* dot) = 0;
    virtual void load(const Circle* circle) = 0;
    virtual void load(const Rectangle* rectangle) = 0;
    virtual void save(const Dot* dot) = 0;
    virtual void save(const Circle* circle) = 0;
    virtual void save(const Rectangle* rectangle) = 0;
};

#endif // VISITOR_H
