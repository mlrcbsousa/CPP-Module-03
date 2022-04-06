/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msousa <mlrcbsousa@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/04 19:39:16 by msousa            #+#    #+#             */
/*   Updated: 2022/04/06 10:47:12 by msousa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

/* Constructors */
ClapTrap::ClapTrap( void ) : _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
	LOG("ClapTrap Default constructor called");
}

ClapTrap::ClapTrap( std::string const & name )
	: _name(name), _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
	LOG("ClapTrap String constructor called");
}

ClapTrap::ClapTrap(
	std::string const & name,
	uint hitPoints,
	uint energyPoints,
	uint attackDamage) :
	_name(name),
	_hitPoints(hitPoints),
	_energyPoints(energyPoints),
	_attackDamage(attackDamage)
{
	LOG("ClapTrap protected constructor called");
}

ClapTrap::ClapTrap( uint hitPoints, uint energyPoints, uint attackDamage ) :
	_hitPoints(hitPoints),
	_energyPoints(energyPoints),
	_attackDamage(attackDamage)
{
	LOG("ClapTrap Default protected constructor called");
}

ClapTrap::ClapTrap( ClapTrap const & src )
{
	LOG("ClapTrap Copy constructor called");
	setName(src.getName());
	setHitPoints(src.getHitPoints());
	setEnergyPoints(src.getEnergyPoints());
	setAttackDamage(src.getAttackDamage());
}

/* Destructor */
ClapTrap::~ClapTrap( void )
{
	LOG("ClapTrap Destructor called");
}

/* Assignment operator */
ClapTrap &  ClapTrap::operator = ( ClapTrap const & rhs )
{
	LOG("ClapTrap Assignment operator called");
	if (this != &rhs) {
		setName(rhs.getName());
		setHitPoints(rhs.getHitPoints());
		setEnergyPoints(rhs.getEnergyPoints());
		setAttackDamage(rhs.getAttackDamage());
	}
	return *this;
}

/* Getters */
std::string	ClapTrap::getName( void ) const { return _name; }
uint	ClapTrap::getHitPoints( void ) const { return _hitPoints; }
uint	ClapTrap::getEnergyPoints( void ) const { return _energyPoints; }
uint	ClapTrap::getAttackDamage( void ) const {return _attackDamage; }

/* Setters */
void	ClapTrap::setName( std::string const & name ) { _name = name; }
void	ClapTrap::setHitPoints( uint const hitPoints ) { _hitPoints = hitPoints; }
void	ClapTrap::setEnergyPoints( uint const energyPoints ) { _energyPoints = energyPoints; }
void	ClapTrap::setAttackDamage( uint const attackDamage ) { _attackDamage = attackDamage; }

void	ClapTrap::attack( const std::string & target )
{
	uint		energy = getEnergyPoints();
	std::string	name = getName();

	if (!energy) {
		LOG("ClapTrap " << name << " doesn't have any more energy!");
		return ;
	}

	LOG("ClapTrap " << name << " attacks " << target << ", causing "
		<< getAttackDamage() << " points of damage!");
	setEnergyPoints(energy - 1);
}

void	ClapTrap::takeDamage( unsigned int amount )
{
	uint		hitpoints = getHitPoints();
	std::string	name = getName();

	if (!hitpoints) {
		LOG("ClapTrap " << name << " can't take any more damage!");
		return ;
	}

	if (hitpoints > amount)	{
		setHitPoints(hitpoints - amount);
		LOG("ClapTrap " << name << " takes " << amount << " damage! HP:"
			<< getHitPoints());
	} else {
		LOG("ClapTrap " << name << " takes " << hitpoints << " damage! HP:0");
		setHitPoints(0);
	}
}

void	ClapTrap::beRepaired( unsigned int amount )
{
	uint		energy = getEnergyPoints();
	std::string	name = getName();

	if (!energy) {
		LOG("ClapTrap " << name << " doesn't have any more energy!");
		return ;
	}

	setHitPoints(getHitPoints() + amount);
	setEnergyPoints(energy - 1);
	LOG("ClapTrap " << name << " repairs " << amount << " hitpoints! HP:"
		<< getHitPoints());
}

/* ostream override */
std::ostream &  operator << ( std::ostream & o, ClapTrap const & i)
{
	o << "----------------------------------------" << std::endl;
    o << "ClapTrap" << std::endl;
    o << "Name: " << i.getName() << std::endl;
    o << "Hit Points: " << i.getHitPoints() << std::endl;
    o << "Energy Points: " << i.getEnergyPoints() << std::endl;
    o << "Attack Damage: " << i.getAttackDamage() << std::endl;
    o << "----------------------------------------" << std::endl;
	return o;
}
