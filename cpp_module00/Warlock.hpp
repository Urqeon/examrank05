#pragma once

#include <iostream>

class Warlock
{
private:
	std::string _name;
	std::string _title;

public:
	Warlock(const std::string &name, const std::string &title);
	~Warlock();
	std::string const &getName() const { return _name; }
	std::string const &getTitle() const { return _title; }
	void setTitle(std::string const &title) { _title = title; }
	void introduce() const;
};
