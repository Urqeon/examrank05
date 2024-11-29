#include <iostream>
#include <map>
#include "ASpell.hpp"
#include "ATarget.hpp"

class Warlock
{

private:
	Warlock();
	std::string _name;
	std::string _title;
	std::map<std::string, ASpell *> _spellbook;

public:
	Warlock(std::string const &name, std::string const &title);
	~Warlock();
	std::string const &getName() const { return _name; }
	std::string const &getTitle() const { return _title; }
	void setTitle(std::string const &title) { _title = title; }
	void introduce() const;

	void learnSpell(ASpell *spell);
	void forgetSpell(std::string spell);
	void launchSpell(std::string spell, ATarget const &target);
};