#include "commands.h"


FileCommand::FileCommand(Document* d)
	: document(d)
{
}

LoadFileCommand::LoadFileCommand(Document* d, const std::string& fname)
	: FileCommand(d)
	, m_fname(fname)
{
}

void LoadFileCommand::execute()
{
	document->saveAs(m_fname);
}

SaveAsCommand::SaveAsCommand(Document* d, const std::string& fname)
	: FileCommand(d)
	, m_fname(fname)
{
}

void SaveAsCommand::execute()
{
	document->saveAs(m_fname);
}

void Commands::addCommand(std::unique_ptr<ICommand> cmd)
{
	m_commands.emplace_back(std::move(cmd));
}

void Commands::execute()
{
	for (auto& cmd : m_commands)
		cmd->execute();
}
