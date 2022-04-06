/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msousa <mlrcbsousa@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/04 20:04:59 by msousa            #+#    #+#             */
/*   Updated: 2022/04/06 13:01:19 by msousa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __DIAMOND_TRAP_H__
# define __DIAMOND_TRAP_H__

# include "ScavTrap.hpp"
# include "FragTrap.hpp"

// ************************************************************************** //
//                               DiamondTrap Class                             //
// ************************************************************************** //

class DiamondTrap: public ScavTrap, public FragTrap {

public:

	DiamondTrap( void );
	DiamondTrap( std::string const & name );
	DiamondTrap( DiamondTrap const & src );
	~DiamondTrap( void );
	DiamondTrap & operator = ( DiamondTrap const & rhs );

	using	ScavTrap::attack;
	// void	attack( const std::string & target );

private:

	std::string	_name;

};

std::ostream &  operator << ( std::ostream & o, DiamondTrap const & p);

#endif /* __DIAMOND_TRAP_H__ */
