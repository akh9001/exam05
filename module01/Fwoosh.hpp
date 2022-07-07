/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fwoosh.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhalidy <akhalidy@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/06 05:04:31 by akhalidy          #+#    #+#             */
/*   Updated: 2022/07/06 06:37:03 by akhalidy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "ASpell.hpp"

class Fwoosh : public ASpell
{
	public:
	Fwoosh(void);
	~Fwoosh(void);
	// Fwoosh(const Fwoosh &other);
	// Fwoosh& operator=(const Fwoosh &other);
	Fwoosh* clone() const;
};