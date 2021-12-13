#pragma once
#include "IParser.h"
#include "FileWorker.h"
#include <map>

class Parser :
	public IParser, public FileWorker
{
	auto BlockInVect(Text &rawInstr, std::vector<IWorker *> &blocks);
	std::string source_;
	std::string dest_;
public:
	Parser(std::string const& fileName, std::string const& source = "", std::string const& dest = "");
	virtual std::list<IWorker*>& Parse();
	~Parser();
};

