/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msousa <mlrcbsousa@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/04 20:01:00 by msousa            #+#    #+#             */
/*   Updated: 2022/04/04 22:09:07 by msousa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __SCAV_TRAP_H__
# define __SCAV_TRAP_H__

# include <iostream>

# define LOG(x) std::cout << x << std::endl
# define ERROR(x) std::cerr << x << std::endl

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
