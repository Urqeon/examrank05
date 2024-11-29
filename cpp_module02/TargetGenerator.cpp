#include "TargetGenerator.hpp"

void TargetGenerator::learnTargetType(ATarget *target)
{
	if (_targets.find(target->getType()) == _targets.end())
		_targets[target->getType()] = target->clone();
}

void TargetGenerator::forgetTargetType(std::string const &target)
{
	if (_targets.find(target) != _targets.end())
		_targets.erase(_targets.find(target));
}

ATarget *TargetGenerator::createTarget(std::string const &target)
{
	ATarget *tmp = NULL;
	if (_targets.find(target) != _targets.end())
	{
		tmp = _targets[target];
	}
	return tmp;
}