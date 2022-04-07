/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msousa <mlrcbsousa@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/04 20:04:54 by msousa            #+#    #+#             */
/*   Updated: 2022/04/07 22:34:23 by msousa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

/* Constructors */

DiamondTrap::DiamondTrap( void ) : ClapTrap(100, 50, 30), ScavTrap(), FragTrap()
{
	LOG("DiamondTrap Default constructor called");
}

DiamondTrap::DiamondTrap( std::string const & name ) :
	ClapTrap(name + "_clap_name", 100, 50, 30),
	ScavTrap(), FragTrap(), _name(name)
{
	LOG("DiamondTrap String constructor called");
}

DiamondTrap::DiamondTrap( DiamondTrap const & src ) :
	ClapTrap(src), ScavTrap(), FragTrap()
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

/* Getters */
std::string	DiamondTrap::getName( void ) const { return _name; }

/* Setters */
void	DiamondTrap::setName( std::string const & name ) { _name = name; }

void	DiamondTrap::attack( const std::string & target )
{
	ScavTrap::attack(target);
}

void	DiamondTrap::whoAmI( void )
{
	LOG(ClapTrap::getName() << " and " << getName());
}

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
