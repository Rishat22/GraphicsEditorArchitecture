#ifndef FILECOMMAND_H
#define FILECOMMAND_H
#include "commands.h"
#include "../graphics_model.h"

class FileCommand : public ICommand
{
public:
    virtual ~FileCommand() = default;
protected:
	FileCommand(const std::shared_ptr<GraphicsModel>& model);
protected:
	std::shared_ptr<GraphicsModel> m_model;
};

class LoadFileCommand : public FileCommand
{
public:
	LoadFileCommand(const std::shared_ptr<GraphicsModel>& model, const std::string& fname);

    void execute() override;
private:
    std::string m_fname;
};

class SaveAsCommand : public FileCommand
{
public:
	SaveAsCommand(const std::shared_ptr<GraphicsModel>& model, const std::string& fname);
    void execute() override;
private:
    std::string m_fname;
};

#endif // FILECOMMAND_H
