/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msousa <mlrcbsousa@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/04 19:40:57 by msousa            #+#    #+#             */
/*   Updated: 2022/04/08 19:45:37 by msousa           ###   ########.fr       */
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
	virtual ~ClapTrap( void );
	ClapTrap & operator = ( ClapTrap const & rhs );

	std::string		getName( void ) const;
	unsigned int			getHitPoints( void ) const;
	unsigned int			getEnergyPoints( void ) const;
	unsigned int			getAttackDamage( void ) const;

	void			setName( std::string const & name );
	void			setHitPoints( unsigned int const hitPoints );
	void			setEnergyPoints( unsigned int const energyPoints );
	void			setAttackDamage( unsigned int const attackDamage );

	virtual void	attack( const std::string & target );
	void			takeDamage( unsigned int amount );
	void			beRepaired( unsigned int amount );

protected:

	// constructor only useable by derived classes
	ClapTrap( std::string const & name, unsigned int hitPoints, unsigned int energyPoints, unsigned int attackDamage);
	ClapTrap( unsigned int hitPoints, unsigned int energyPoints, unsigned int attackDamage );

	std::string	_name;
	unsigned int		_hitPoints;
	unsigned int		_energyPoints;
	unsigned int		_attackDamage;

};

std::ostream &  operator << ( std::ostream & o, ClapTrap const & p);

#endif /* __CLAP_TRAP_H__ */
