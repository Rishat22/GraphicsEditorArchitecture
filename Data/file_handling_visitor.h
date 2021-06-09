#ifndef FILEHANDLINGVISITOR_H
#define FILEHANDLINGVISITOR_H
#include <string>
#include "visitor.h"

class FileHandlingVisitor : public Visitor
{
public:
	FileHandlingVisitor();

		void loadFile(const std::string& strFileName);
		void saveAs(const std::string& strFileName);

		void load(const Dot* dot) override;
		void load(const Circle* circle) override;
		void load(const Rectangle* rectangle) override;

		void save(const Dot* dot) override;
		void save(const Circle* circle) override;
		void save(const Rectangle* rectangle) override;

};

#endif // FILEHANDLINGVISITOR_H
