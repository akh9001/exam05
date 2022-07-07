/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Warlock.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhalidy <akhalidy@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/05 22:45:21 by akhalidy          #+#    #+#             */
/*   Updated: 2022/07/06 06:43:24 by akhalidy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Warlock.hpp"
#include <string>
#include <vector>

const std::string	&Warlock::getName(void) const
{
	return name;
}

const std::string	&Warlock::getTitle(void) const
{
	return (title);
}

void				Warlock::setTitle(const std::string &title)
{
	this->title = title;
}

Warlock::Warlock(void) {}

Warlock::Warlock(const std::string &name, const std::string &title): name(name), title(title)
{
	std::cout << name << ": This looks like another boring day." << std::endl;
}

Warlock::Warlock(const Warlock &other): name(other.name), title(other.title){}

Warlock &Warlock::operator=(Warlock &other)
{
	if (this == &other)
		return *this;
	name = other.name;
	title = other.title;
	return *this;
}

Warlock::~Warlock(void)
{
	std::cout << name << ": My job here is done!" << std::endl;
	std::vector<ASpell *>::iterator	it = spells.begin();
	std::vector<ASpell *>::iterator	end = spells.end();
	
	while(it != end)
	{
		delete *it;
		spells.erase(it);
		return;
		it++;
	}
	spells.clear();
}

void		Warlock::introduce(void) const
{
	std::cout << name <<": I am " << name << ", " << title << "!" << std::endl;
}

void		Warlock::learnSpell(ASpell *spell)
{
	std::vector<ASpell *>::iterator	it = spells.begin();
	std::vector<ASpell *>::iterator	end = spells.end();
	std::string	_name = spell->getName();

	while(it != end)
	{
		if ((*it)->getName() == _name)
			return;
		it++;
	}
	spells.push_back(spell->clone());//!
}
void		Warlock::forgetSpell(const std::string &name)
{
	std::vector<ASpell *>::iterator	it = spells.begin();
	std::vector<ASpell *>::iterator	end = spells.end();

	while(it != end)
	{
		if ((*it)->getName() == name)
		{
			delete *it;
			spells.erase(it);
			return;
		}
		it++;
	}
}
void		Warlock::launchSpell(const std::string &spell, const ATarget &target)
{
	std::vector<ASpell *>::iterator	it = spells.begin();
	std::vector<ASpell *>::iterator	end = spells.end();

	while(it != end)
	{
		if ((*it)->getName() == spell)
		{
			(*it)->launch(target);
			return;
		}
		it++;
	}
}