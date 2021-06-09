#include "dot.h"


void Dot::draw() const
{

}

void Dot::load(Visitor* visitor) const
{
	visitor->load(this);
}

void Dot::save(Visitor* visitor) const
{
	visitor->save(this);
}
