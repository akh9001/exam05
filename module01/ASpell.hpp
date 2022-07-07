/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ASpell.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhalidy <akhalidy@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/06 01:34:17 by akhalidy          #+#    #+#             */
/*   Updated: 2022/07/06 06:18:12 by akhalidy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include <string>
#include "ATarget.hpp"

class ATarget;
class ASpell
{
	protected:
	std::string		name;
	std::string		effects;

	public:
	const std::string		&getName(void) const;
	const std::string		&getEffects(void) const;
	virtual	ASpell				*clone() const = 0;
	ASpell(const std::string &name, const std::string &effects);
	ASpell(void);
	ASpell(const ASpell &other);
	ASpell &operator=(const ASpell &other);
	virtual ~ASpell(void);
	void	launch(const ATarget &target) const;
};