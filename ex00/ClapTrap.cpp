/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msousa <mlrcbsousa@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/04 19:39:16 by msousa            #+#    #+#             */
/*   Updated: 2022/04/05 18:21:03 by msousa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

/* Constructors */
ClapTrap::ClapTrap( void ) : _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
	LOG("Default constructor called");
}

ClapTrap::ClapTrap( std::string const & name )
	: _name(name), _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
	LOG("String constructor called");
}

ClapTrap::ClapTrap( ClapTrap const & src )
{
	LOG("Copy constructor called");
	*this = src;
}

/* Destructor */
ClapTrap::~ClapTrap( void )
{
	LOG("Destructor called");
}

/* Assignment operator */
ClapTrap &  ClapTrap::operator = ( ClapTrap const & rhs )
{
	LOG("Assignment operator called");
	if (this != &rhs) {
		*this = rhs;
	}
	return *this;
}

std::string &	ClapTrap::getName( void ) { return _name; }
uint &	ClapTrap::getHitPoints( void ) { return _hitPoints; }
uint &	ClapTrap::getEnergyPoints( void ) { return _energyPoints; }
uint &	ClapTrap::getAttackDamage( void ) {return _attackDamage; }
void	ClapTrap::setHitPoints( uint const amount ) { _hitPoints = amount; }
void	ClapTrap::setEnergyPoints( uint const amount ) { _energyPoints = amount; }

void	ClapTrap::attack( const std::string & target )
{
	uint &			energy = getEnergyPoints();
	std::string &	name = getName();

	if (!energy) {
		LOG("ClapTrap " << name << " doesn't have any more energy!");
		return ;
	}

	LOG("ClapTrap " << name << " attacks " << target << ", causing "
		<< getAttackDamage() << " points of damage!");
	energy--;
}

void	ClapTrap::takeDamage( unsigned int amount )
{
	uint &			hitpoints = getHitPoints();
	std::string &	name = getName();

	if (!hitpoints) {
		LOG("ClapTrap " << name << " can't take any more damage!");
		return ;
	}

	if (hitpoints > amount)	{
		hitpoints -= amount;
		LOG("ClapTrap " << name << " takes " << amount << " damage! HP:"
			<< hitpoints);
	} else {
		LOG("ClapTrap " << name << " takes " << hitpoints << " damage! HP:0");
		setHitPoints(0);
	}
}

void	ClapTrap::beRepaired( unsigned int amount )
{
	uint &			energy = getEnergyPoints();
	uint &			hitpoints = getHitPoints();
	std::string &	name = getName();

	if (!energy) {
		LOG("ClapTrap " << name << " doesn't have any more energy!");
		return ;
	}

	hitpoints += amount;
	energy--;
	LOG("ClapTrap " << name << " repairs " << amount << " hitpoints! HP:"
		<< hitpoints);
}

/* ostream override */
std::ostream &  operator << ( std::ostream & o, ClapTrap const & i)
{
	(void)i;
	o << "ClapTrap";
	return o;
}
