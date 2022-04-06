/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msousa <mlrcbsousa@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/04 20:00:53 by msousa            #+#    #+#             */
/*   Updated: 2022/04/06 10:59:45 by msousa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

/* Constructors */
ScavTrap::ScavTrap( void ) : ClapTrap(100, 50, 20)
{
	LOG("ScavTrap Default constructor called");
}

ScavTrap::ScavTrap( std::string const & name ) : ClapTrap(name, 100, 50, 20)
{
	LOG("ScavTrap String constructor called");
}

ScavTrap::ScavTrap( ScavTrap const & src ) : ClapTrap(src)
{
	LOG("ScavTrap Copy constructor called");
}

/* Destructor */
ScavTrap::~ScavTrap( void )
{
	LOG("ScavTrap Destructor called");
}

/* Assignment operator */
ScavTrap &  ScavTrap::operator = ( ScavTrap const & rhs )
{
	LOG("ScavTrap Assignment operator called");
	if (this != &rhs) {
		this->ClapTrap::operator = ( rhs );
	}
	return *this;
}

void	ScavTrap::attack( const std::string & target )
{
	uint		energy = getEnergyPoints();
	std::string	name = getName();

	if (!energy) {
		LOG("ScavTrap " << name << " doesn't have any more energy!");
		return ;
	}

	LOG("ScavTrap " << name << " attacks " << target << ", causing "
		<< getAttackDamage() << " points of damage!");
	setEnergyPoints(energy - 1);
}

void	ScavTrap::guardGate( void )
{
	LOG("ScavTrap is now in Gate keeper mode");
}

/* ostream override */
std::ostream &  operator << ( std::ostream & o, ScavTrap const & i)
{
	o << "----------------------------------------" << std::endl;
    o << "ScavTrap" << std::endl;
    o << "Name: " << i.getName() << std::endl;
    o << "Hit Points: " << i.getHitPoints() << std::endl;
    o << "Energy Points: " << i.getEnergyPoints() << std::endl;
    o << "Attack Damage: " << i.getAttackDamage() << std::endl;
    o << "----------------------------------------" << std::endl;
	return o;
}
