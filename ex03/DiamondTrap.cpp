/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msousa <mlrcbsousa@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/04 20:04:54 by msousa            #+#    #+#             */
/*   Updated: 2022/04/04 20:05:18 by msousa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

/* Constructors */
DiamondTrap::DiamondTrap( void ) { /* no-op */}
DiamondTrap::DiamondTrap( DiamondTrap const & src ) { *this = src; }

/* Destructor */
DiamondTrap::~DiamondTrap( void ) { /* no-op */}

/* Assignment operator */
DiamondTrap &  DiamondTrap::operator = ( DiamondTrap const & rhs )
{
	if (this != &rhs) {
		*this = DiamondTrap(rhs);
	}
	return *this;
}

/* ostream override */
std::ostream &  operator << ( std::ostream & o, DiamondTrap const & i)
{
	(void)i;
	o << "DiamondTrap";
	return o;
}
