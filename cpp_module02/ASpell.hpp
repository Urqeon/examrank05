#pragma once
#include <iostream>
#include "ATarget.hpp"

class ATarget;

class ASpell
{
protected:
	std::string _name;
	std::string _eff;

public:
	ASpell(const std::string &name, const std::string &eff) : _name(name), _eff(eff) {}
	virtual ~ASpell() {}
	std::string const &getName() const { return _name; }
	std::string const &getEffects() const { return _eff; }
	virtual ASpell *clone() const = 0;
	void launch(ATarget const &target) const;
};