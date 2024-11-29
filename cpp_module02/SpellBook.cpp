#include "SpellBook.hpp"

void SpellBook::learnSpell(ASpell *spell)
{
	if (_spellbook.find(spell->getName()) == _spellbook.end())
		_spellbook[spell->getName()] = spell->clone();
}

void SpellBook::forgetSpell(std::string const &spell)
{
	if (_spellbook.find(spell) != _spellbook.end())
		_spellbook.erase(spell);
}

ASpell *SpellBook::createSpell(std::string const &spell)
{
	ASpell *tmp = NULL;
	if (_spellbook.find(spell) != _spellbook.end())
		tmp = _spellbook[spell];
	return (tmp);
}