/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msousa <mlrcbsousa@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/04 20:04:54 by msousa            #+#    #+#             */
/*   Updated: 2022/04/06 12:57:51 by msousa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

/* Constructors */

DiamondTrap::DiamondTrap( void ) : ClapTrap()
{
	LOG("DiamondTrap Default constructor called");
	LOG(FragTrap::getHitPoints());
	LOG(ScavTrap::getEnergyPoints());
	LOG(FragTrap::getAttackDamage());
}

DiamondTrap::DiamondTrap( std::string const & name ) :
	ClapTrap(name + "_clap_name"), _name(name)
{
	LOG("DiamondTrap String constructor called");
}

DiamondTrap::DiamondTrap( DiamondTrap const & src ) : ClapTrap(src)
{
	LOG("DiamondTrap Copy constructor called");
}

/* Destructor */
DiamondTrap::~DiamondTrap( void )
{
	LOG("DiamondTrap Destructor called");
}

/* Assignment operator */
DiamondTrap &  DiamondTrap::operator = ( DiamondTrap const & rhs )
{
	LOG("DiamondTrap Assignment operator called");
	if (this != &rhs) {
		this->ClapTrap::operator = ( rhs );
	}
	return *this;
}

// void	DiamondTrap::attack( const std::string & target )
// {
// 	ScavTrap::attack(target);
// }

/* ostream override */
std::ostream &  operator << ( std::ostream & o, DiamondTrap const & i)
{
	o << "----------------------------------------" << std::endl;
    o << "DiamondTrap" << std::endl;
    o << "Name: " << i.getName() << std::endl;
    o << "Hit Points: " << i.getHitPoints() << std::endl;
    o << "Energy Points: " << i.getEnergyPoints() << std::endl;
    o << "Attack Damage: " << i.getAttackDamage() << std::endl;
    o << "----------------------------------------" << std::endl;
	return o;
}
