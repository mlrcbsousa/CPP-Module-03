/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msousa <mlrcbsousa@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/04 19:39:16 by msousa            #+#    #+#             */
/*   Updated: 2022/04/04 20:00:17 by msousa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

/* Constructors */
ClapTrap::ClapTrap( void ) { /* no-op */}
ClapTrap::ClapTrap( ClapTrap const & src ) { *this = src; }

/* Destructor */
ClapTrap::~ClapTrap( void ) { /* no-op */}

/* Assignment operator */
ClapTrap &  ClapTrap::operator = ( ClapTrap const & rhs )
{
	if (this != &rhs) {
		*this = ClapTrap(rhs);
	}
	return *this;
}

/* ostream override */
std::ostream &  operator << ( std::ostream & o, ClapTrap const & i)
{
	(void)i;
	o << "ClapTrap";
	return o;
}
