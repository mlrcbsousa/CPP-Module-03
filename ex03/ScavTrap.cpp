/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msousa <mlrcbsousa@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/04 20:00:53 by msousa            #+#    #+#             */
/*   Updated: 2022/04/04 20:01:45 by msousa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

/* Constructors */
ScavTrap::ScavTrap( void ) { /* no-op */}
ScavTrap::ScavTrap( ScavTrap const & src ) { *this = src; }

/* Destructor */
ScavTrap::~ScavTrap( void ) { /* no-op */}

/* Assignment operator */
ScavTrap &  ScavTrap::operator = ( ScavTrap const & rhs )
{
	if (this != &rhs) {
		*this = ScavTrap(rhs);
	}
	return *this;
}

/* ostream override */
std::ostream &  operator << ( std::ostream & o, ScavTrap const & i)
{
	(void)i;
	o << "ScavTrap";
	return o;
}
