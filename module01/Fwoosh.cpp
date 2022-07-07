/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fwoosh.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhalidy <akhalidy@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/06 05:05:57 by akhalidy          #+#    #+#             */
/*   Updated: 2022/07/06 06:36:57 by akhalidy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fwoosh.hpp"

// Fwoosh::Fwoosh(void) : ASpell(std::string("Fwoosh"), std::string("fwooshed"))
Fwoosh::Fwoosh(void) : ASpell("Fwoosh", "fwooshed") {}
// Fwoosh::Fwoosh(const Fwoosh &other) : ASpell(other) {}
// Fwoosh& Fwoosh::operator=(const Fwoosh &other) { *this = other; return *this;}
Fwoosh	*Fwoosh::clone(void) const
{
	Fwoosh	*tmp = new Fwoosh();
	return (tmp);
}
Fwoosh::~Fwoosh(void) {}