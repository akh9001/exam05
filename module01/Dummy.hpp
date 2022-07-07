/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dummy.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhalidy <akhalidy@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/06 05:34:58 by akhalidy          #+#    #+#             */
/*   Updated: 2022/07/06 06:33:02 by akhalidy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "ATarget.hpp"

class Dummy : public ATarget
{
	public:
	Dummy(void);
	~Dummy(void);
	// Dummy(const Dummy &other);
	// Dummy& operator=(const Dummy &other);
	Dummy* clone() const;
};