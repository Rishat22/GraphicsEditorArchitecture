#include "file_command.h"


FileCommand::FileCommand(FileHandlingVisitor* d)
	: m_fileHandling(d)
{
}

LoadFileCommand::LoadFileCommand(FileHandlingVisitor* d, const std::string& fname)
	: FileCommand(d)
	, m_fname(fname)
{
}

void LoadFileCommand::execute()
{
	m_fileHandling->loadFile(m_fname);
}

SaveAsCommand::SaveAsCommand(FileHandlingVisitor* d, const std::string& fname)
	: FileCommand(d)
	, m_fname(fname)
{
}

void SaveAsCommand::execute()
{
	m_fileHandling->saveAs(m_fname);
}
