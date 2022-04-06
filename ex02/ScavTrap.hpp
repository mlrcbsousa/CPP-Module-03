/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msousa <mlrcbsousa@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/04 20:01:00 by msousa            #+#    #+#             */
/*   Updated: 2022/04/06 11:01:29 by msousa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __SCAV_TRAP_H__
# define __SCAV_TRAP_H__

# include "ClapTrap.hpp"

// ************************************************************************** //
//                               ScavTrap Class                               //
// ************************************************************************** //

class ScavTrap : public ClapTrap {

public:

	ScavTrap( void );
	ScavTrap( std::string const & name );
	ScavTrap( ScavTrap const & src );
	~ScavTrap( void );
	ScavTrap & operator = ( ScavTrap const & rhs );

	void		attack( const std::string & target );
	void		guardGate( void );

};

std::ostream &  operator << ( std::ostream & o, ScavTrap const & p);

#endif /* __SCAV_TRAP_H__ */
