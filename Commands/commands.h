#ifndef ICOMMAND_H
#define ICOMMAND_H
#include <memory>
#include <vector>
#include <string>

class ICommand {
public:
    virtual void execute() = 0;
    virtual ~ICommand() = default;
};

class Commands : public ICommand
{
public:
    Commands() = default;
    ~Commands() = default;

    void addCommand(std::unique_ptr<ICommand> cmd);
    void execute() override;
private:
    std::vector<std::unique_ptr<ICommand>> m_commands;
};

#endif // ICOMMAND_H
