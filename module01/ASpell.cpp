/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ASpell.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhalidy <akhalidy@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/06 02:10:40 by akhalidy          #+#    #+#             */
/*   Updated: 2022/07/06 06:36:18 by akhalidy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ASpell.hpp"

	const std::string		&ASpell::getName(void) const
	{
		return (name);
	}
	const std::string		&ASpell::getEffects(void) const
	{
		return (effects);
	}

	ASpell::ASpell(const std::string &name, const std::string &effects) : name(name), effects(effects)
	{
		
	}
	ASpell::ASpell(void) : name(), effects()
	{
		
	}
	ASpell::ASpell(const ASpell &other) : name(other.name), effects(other.effects)
	{
		
	}
	ASpell &ASpell::operator=(const ASpell &other)
	{
		if (this == &other)
			return (*this);
		name = other.name;
		effects = other.effects;
		return (*this);
	}
	
	ASpell::~ASpell(void)
	{
		
	}

	void	ASpell::launch(const ATarget &target) const
	{
		target.getHitBySpell(*this);
	}