/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msousa <mlrcbsousa@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/04 20:04:59 by msousa            #+#    #+#             */
/*   Updated: 2022/04/07 22:33:00 by msousa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __DIAMOND_TRAP_H__
# define __DIAMOND_TRAP_H__

# include "ScavTrap.hpp"
# include "FragTrap.hpp"

// ************************************************************************** //
//                               DiamondTrap Class                            //
// ************************************************************************** //

class DiamondTrap : public ScavTrap, public FragTrap {

public:

	DiamondTrap( void );
	DiamondTrap( std::string const & name );
	DiamondTrap( DiamondTrap const & src );
	~DiamondTrap( void );
	DiamondTrap & operator = ( DiamondTrap const & rhs );

	std::string		getName( void ) const;
	void			setName( std::string const & name );

	void	attack( const std::string & target );
	void	whoAmI( void );

private:

	std::string	_name;

};

std::ostream &  operator << ( std::ostream & o, DiamondTrap const & p);

#endif /* __DIAMOND_TRAP_H__ */
