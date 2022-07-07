/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Warlock.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhalidy <akhalidy@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/05 22:45:21 by akhalidy          #+#    #+#             */
/*   Updated: 2022/07/06 02:13:19 by akhalidy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Warlock.hpp"

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

Warlock::Warlock(void) : name(), title(){}

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
}

void		Warlock::introduce(void) const
{
	std::cout << name <<": I am " << name << ", " << title << "!" << std::endl;
}
