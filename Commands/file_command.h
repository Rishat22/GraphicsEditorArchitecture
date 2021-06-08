#ifndef FILECOMMAND_H
#define FILECOMMAND_H
#include "commands.h"

class FileCommand : public ICommand
{
public:
    virtual ~FileCommand() = default;
protected:
    FileCommand(Document* d);
protected:
    /* ToDo mb need use smart pointer */
    Document* m_document;
};

class LoadFileCommand : public FileCommand
{
public:
    LoadFileCommand(Document* d, const std::string& fname);

    void execute() override;
private:
    std::string m_fname;
};

class SaveAsCommand : public FileCommand
{
public:
    SaveAsCommand(Document* d, const std::string& fname);
    void execute() override;
private:
    std::string m_fname;
};

#endif // FILECOMMAND_H
