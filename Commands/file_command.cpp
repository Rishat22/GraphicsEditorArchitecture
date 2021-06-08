#include "file_command.h"


FileCommand::FileCommand(Document* d)
	: m_document(d)
{
}

LoadFileCommand::LoadFileCommand(Document* d, const std::string& fname)
	: FileCommand(d)
	, m_fname(fname)
{
}

void LoadFileCommand::execute()
{
	m_document->saveAs(m_fname);
}

SaveAsCommand::SaveAsCommand(Document* d, const std::string& fname)
	: FileCommand(d)
	, m_fname(fname)
{
}

void SaveAsCommand::execute()
{
	m_document->saveAs(m_fname);
}
