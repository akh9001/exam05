/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Warlock.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhalidy <akhalidy@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/05 22:45:14 by akhalidy          #+#    #+#             */
/*   Updated: 2022/07/06 00:02:14 by akhalidy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include <string>

class Warlock
{
	std::string		name;
	std::string		title;
	Warlock(void);
	Warlock(const Warlock &);
	Warlock &operator=(Warlock &);
	public:
	Warlock(const std::string &name, const std::string &title);
	const std::string	&getName(void) const;
	const std::string	&getTitle(void) const;
	void				setTitle(const std::string &);
	void				introduce(void) const;
	~Warlock(void);
};