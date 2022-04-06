/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msousa <mlrcbsousa@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/04 20:02:15 by msousa            #+#    #+#             */
/*   Updated: 2022/04/06 21:21:31 by msousa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

/* Constructors */
FragTrap::FragTrap( void ) : ClapTrap(100, 100, 30)
{
	LOG("FragTrap Default constructor called");
}

FragTrap::FragTrap( std::string const & name ) : ClapTrap(name, 100, 100, 30)
{
	LOG("FragTrap String constructor called");
}

FragTrap::FragTrap( FragTrap const & src ) : ClapTrap(src)
{
	LOG("FragTrap Copy constructor called");
}

/* Destructor */
FragTrap::~FragTrap( void )
{
	LOG("FragTrap Destructor called");
}

/* Assignment operator */
FragTrap &  FragTrap::operator = ( FragTrap const & rhs )
{
	LOG("FragTrap Assignment operator called");
	if (this != &rhs) {
		this->ClapTrap::operator = ( rhs );
	}
	return *this;
}

void	FragTrap::attack( const std::string & target )
{
	unsigned int		energy = getEnergyPoints();
	std::string	name = getName();

	if (!energy) {
		LOG("FragTrap " << name << " doesn't have any more energy!");
		return ;
	}

	LOG("FragTrap " << name << " attacks " << target << ", causing "
		<< getAttackDamage() << " points of damage!");
	setEnergyPoints(energy - 1);
}

void	FragTrap::highFivesGuys( void )
{
	LOG("FragTrap is high fiving everyone!");
}

/* ostream override */
std::ostream &  operator << ( std::ostream & o, FragTrap const & i)
{
	o << "----------------------------------------" << std::endl;
    o << "FragTrap" << std::endl;
    o << "Name: " << i.getName() << std::endl;
    o << "Hit Points: " << i.getHitPoints() << std::endl;
    o << "Energy Points: " << i.getEnergyPoints() << std::endl;
    o << "Attack Damage: " << i.getAttackDamage() << std::endl;
    o << "----------------------------------------" << std::endl;
	return o;
}
