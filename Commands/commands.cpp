#include "commands.h"

void Commands::addCommand(std::unique_ptr<ICommand> cmd)
{
	m_commands.emplace_back(std::move(cmd));
}

void Commands::execute()
{
	for (auto& cmd : m_commands)
		cmd->execute();
}
