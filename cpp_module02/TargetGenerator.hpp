#pragma once
#include "ATarget.hpp"
#include <map>

class TargetGenerator
{
private:
	std::map<std::string, ATarget *> _targets;

public:
	void learnTargetType(ATarget *target);
	void forgetTargetType(std::string const &target);
	ATarget *createTarget(std::string const &target);
};