/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dummy.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhalidy <akhalidy@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/06 05:36:14 by akhalidy          #+#    #+#             */
/*   Updated: 2022/07/06 06:32:47 by akhalidy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dummy.hpp"

Dummy::Dummy(void) : ATarget("Target Practice Dummy") {}
// Dummy::Dummy(const Dummy &other) : ATarget(other) {}
// Dummy& Dummy::operator=(const Dummy &other) { *this = other; return *this;}
Dummy	*Dummy::clone(void) const
{
	Dummy	*tmp = new Dummy();
	return (tmp);
}
Dummy::~Dummy(void) {}