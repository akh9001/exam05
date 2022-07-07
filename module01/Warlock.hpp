/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Warlock.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhalidy <akhalidy@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/05 22:45:14 by akhalidy          #+#    #+#             */
/*   Updated: 2022/07/06 05:58:33 by akhalidy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include <string>
#include <vector>
#include "ASpell.hpp"

class Warlock
{
	std::string				name;
	std::string				title;
	std::vector<ASpell *>		spells;
	Warlock(void);
	Warlock(const Warlock &);
	Warlock &operator=(Warlock &);
	public:
	Warlock(const std::string &name, const std::string &title);
	const std::string	&getName(void) const;
	const std::string	&getTitle(void) const;
	void				setTitle(const std::string &);
	void				introduce(void) const;
	void				learnSpell(ASpell *ASpell);
	void				forgetSpell(const std::string &);
	void				launchSpell(const std::string &, const ATarget &);
	~Warlock(void);
};