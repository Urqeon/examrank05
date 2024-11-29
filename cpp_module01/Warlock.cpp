#include "Warlock.hpp"

Warlock::Warlock(std::string const &name, std::string const &title) : _name(name), _title(title)
{
	std::cout << _name << ": This looks like another boring day." << std::endl;
}

Warlock::~Warlock()
{
	std::cout << _name << ": My job here is done!" << std::endl;
}

void Warlock::introduce() const
{
	std::cout << _name << ": I am " << _name << ", " << _title << "!" << std::endl;
}

void Warlock::learnSpell(ASpell *spell)
{
	if (_spellbook.find(spell->getName()) == _spellbook.end())
		_spellbook[spell->getName()] = spell->clone();
}

void Warlock::forgetSpell(std::string spell)
{
	if (_spellbook.find(spell) != _spellbook.end())
		_spellbook.erase(spell);
}

void Warlock::launchSpell(std::string spell, ATarget const &target)
{
	if (_spellbook.find(spell) != _spellbook.end())
		_spellbook[spell]->launch(target);
}