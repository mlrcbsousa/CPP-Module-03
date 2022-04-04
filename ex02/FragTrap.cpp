/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msousa <mlrcbsousa@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/04 20:02:15 by msousa            #+#    #+#             */
/*   Updated: 2022/04/04 20:02:19 by msousa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

/* Constructors */
FragTrap::FragTrap( void ) { /* no-op */}
FragTrap::FragTrap( FragTrap const & src ) { *this = src; }

/* Destructor */
FragTrap::~FragTrap( void ) { /* no-op */}

/* Assignment operator */
FragTrap &  FragTrap::operator = ( FragTrap const & rhs )
{
	if (this != &rhs) {
		*this = FragTrap(rhs);
	}
	return *this;
}

/* ostream override */
std::ostream &  operator << ( std::ostream & o, FragTrap const & i)
{
	(void)i;
	o << "FragTrap";
	return o;
}
