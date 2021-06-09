#ifndef FILECOMMAND_H
#define FILECOMMAND_H
#include "commands.h"
#include "../Data/file_handling_visitor.h"

class FileCommand : public ICommand
{
public:
    virtual ~FileCommand() = default;
protected:
	FileCommand(FileHandlingVisitor* d);
protected:
    /* ToDo mb need use smart pointer */
	FileHandlingVisitor* m_fileHandling;
};

class LoadFileCommand : public FileCommand
{
public:
	LoadFileCommand(FileHandlingVisitor* d, const std::string& fname);

    void execute() override;
private:
    std::string m_fname;
};

class SaveAsCommand : public FileCommand
{
public:
	SaveAsCommand(FileHandlingVisitor* d, const std::string& fname);
    void execute() override;
private:
    std::string m_fname;
};

#endif // FILECOMMAND_H
