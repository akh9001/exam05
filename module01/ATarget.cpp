/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ATarget.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhalidy <akhalidy@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/06 04:43:57 by akhalidy          #+#    #+#             */
/*   Updated: 2022/07/06 06:36:47 by akhalidy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ATarget.hpp"

	const std::string	&ATarget::getType(void)  const
	{
		return type;
	}
	
	ATarget::ATarget(void) : type()
	{
		
	}
	
	ATarget::ATarget(const std::string &type) : type(type)
	{
		
	}
	
	ATarget::ATarget(const ATarget &other)
	{
		*this = other;
	}
	
	ATarget& ATarget::operator=(const ATarget &other)
	{
		if (this == &other)
			type = other.type;
		return *this;
	}
	
	void	ATarget::getHitBySpell(const ASpell &spell) const
	{
		std::cout << type << " has been " << spell.getEffects() << "!" << std::endl;
	}

	ATarget::~ATarget(void)
	{

	}