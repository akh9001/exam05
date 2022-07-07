/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ATarget.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhalidy <akhalidy@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/06 04:35:24 by akhalidy          #+#    #+#             */
/*   Updated: 2022/07/06 06:23:25 by akhalidy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
// #include <iostream>
// #include <string>
#include "ASpell.hpp"

class ASpell;
class ATarget
{
	protected:
	std::string	type;
	
	public:
	const std::string	&getType(void)  const;
	virtual	ATarget*clone() const = 0;
	ATarget(void);
	ATarget(const std::string &type);
	ATarget(const ATarget &other);
	ATarget& operator=(const ATarget &other);
	void	getHitBySpell(const ASpell &spell) const;
	virtual ~ATarget(void);
};