#ifndef ICOMMAND_H
#define ICOMMAND_H
#include <memory>
#include <vector>
#include <string>
#include "document.h"

class ICommand {
public:
    virtual void execute() = 0;
    virtual ~ICommand() = default;
};

class FileCommand : public ICommand {
public:
    virtual ~FileCommand() = default;
protected:
    FileCommand(Document* d);
protected:
    Document* document;
};

class LoadFileCommand : public FileCommand {
public:
    LoadFileCommand(Document* d, const std::string& fname);

    void execute() override;
private:
    std::string m_fname;
};

class SaveAsCommand : public FileCommand {
public:
    SaveAsCommand(Document* d, const std::string& fname);
    void execute() override;
private:
    std::string m_fname;
};

class Commands : public ICommand {
public:
    Commands() = default;
    ~Commands() = default;

    void addCommand(std::unique_ptr<ICommand> cmd);
    void execute() override;
private:
    std::vector<std::unique_ptr<ICommand>> m_commands;
};

#endif // ICOMMAND_H
