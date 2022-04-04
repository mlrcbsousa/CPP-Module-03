/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msousa <mlrcbsousa@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/04 19:40:57 by msousa            #+#    #+#             */
/*   Updated: 2022/04/04 23:36:12 by msousa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __CLAP_TRAP_H__
# define __CLAP_TRAP_H__

# include <iostream>

# define LOG(x) std::cout << x << std::endl
# define ERROR(x) std::cerr << x << std::endl

// ************************************************************************** //
//                               ClapTrap Class                         	  //
// ************************************************************************** //

class ClapTrap {

public:

	ClapTrap( void );
	ClapTrap( std::string const & name );
	ClapTrap( ClapTrap const & src );
	~ClapTrap( void );
	ClapTrap & operator = ( ClapTrap const & rhs );

	std::string &	getName( void );
	uint &			getHitPoints( void );
	uint &			getEnergyPoints( void );
	uint &			getAttackDamage( void );
	void			setHitPoints( uint const amount );
	void			setEnergyPoints( uint const amount );

	void		attack( const std::string & target );
	void		takeDamage( unsigned int amount );
	void		beRepaired( unsigned int amount );

private:

	std::string	_name;
	uint		_hitPoints;
	uint		_energyPoints;
	uint		_attackDamage;

};

std::ostream &  operator << ( std::ostream & o, ClapTrap const & p);

#endif /* __CLAP_TRAP_H__ */
