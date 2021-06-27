#include "file_handling_visitor.h"
#include "../GraphicsShapes/dot.h"
#include "../GraphicsShapes/circle.h"
#include "../GraphicsShapes/rectangle.h"
#include <vector>
#include <memory>

FileHandlingVisitor::FileHandlingVisitor()
{

}

void FileHandlingVisitor::loadFile(const std::string& strFileName)
{
	std::cout << "load file " << strFileName << std::endl;
	for(const auto& shape : m_shapes)
	{
		shape->load(this);
	}
}

void FileHandlingVisitor::saveAs(const std::string& strFileName)
{
	std::cout << "save file " << strFileName << std::endl;
	for(const auto& shape : m_shapes)
	{
		shape->save(this);
	}
}

void FileHandlingVisitor::load(const Dot* /*dot*/)
{

}

void FileHandlingVisitor::load(const Circle* /*circle*/)
{

}

void FileHandlingVisitor::load(const Rectangle* /*rectangle*/)
{

}

void FileHandlingVisitor::save(const Dot* /*dot*/)
{

}

void FileHandlingVisitor::save(const Circle* /*circle*/)
{

}

void FileHandlingVisitor::save(const Rectangle* /*rectangle*/)
{

}

std::vector<std::shared_ptr<GraphicsShape> > FileHandlingVisitor::getShapes() const
{
	return m_shapes;
}

void FileHandlingVisitor::setShapes(const std::vector<std::shared_ptr<GraphicsShape> >& shapes)
{
	m_shapes = shapes;
}
