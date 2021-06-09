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
	std::vector< std::shared_ptr<GraphicsShape> > shapes
	{
		std::make_shared<Dot>(),
		std::make_shared<Circle>(),
		std::make_shared<Rectangle>(),

	};
	for(const auto& shape : shapes)
	{
		shape->load(this);
	}
}

void FileHandlingVisitor::saveAs(const std::string& strFileName)
{
	std::cout << "save file " << strFileName << std::endl;
	std::vector< std::shared_ptr<GraphicsShape> > shapes
	{
		std::make_shared<Dot>(),
		std::make_shared<Circle>(),
		std::make_shared<Rectangle>(),

	};
	for(const auto& shape : shapes)
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
