#ifndef FILEHANDLINGVISITOR_H
#define FILEHANDLINGVISITOR_H
#include <string>
#include "visitor.h"

class FileHandlingVisitor : public Visitor
{
public:
	FileHandlingVisitor();

        void saveDocument();
        void load(const std::string& strFileName);

        void visitDot(const Dot* dot) override;
        void visitCircle(const Circle* circle) override;
        void visitRectangle(const Rectangle* rectangle) override;

};

#endif // FILEHANDLINGVISITOR_H
