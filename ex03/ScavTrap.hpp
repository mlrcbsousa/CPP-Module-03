/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msousa <mlrcbsousa@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/04 20:01:00 by msousa            #+#    #+#             */
/*   Updated: 2022/04/04 20:01:35 by msousa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __SCAV_TRAP_H__
# define __SCAV_TRAP_H__

# include <iostream>

// ************************************************************************** //
//                               ScavTrap Class                               //
// ************************************************************************** //

class ScavTrap {

public:

	ScavTrap( void );
	ScavTrap( ScavTrap const & src );
	~ScavTrap( void );
	ScavTrap & operator = ( ScavTrap const & rhs );

private:



};

std::ostream &  operator << ( std::ostream & o, ScavTrap const & p);

#endif /* __SCAV_TRAP_H__ */
