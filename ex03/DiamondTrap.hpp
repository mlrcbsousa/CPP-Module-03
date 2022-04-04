/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msousa <mlrcbsousa@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/04 20:04:59 by msousa            #+#    #+#             */
/*   Updated: 2022/04/04 22:10:57 by msousa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __DIAMOND_TRAP_H__
# define __DIAMOND_TRAP_H__

# include <iostream>

# define LOG(x) std::cout << x << std::endl
# define ERROR(x) std::cerr << x << std::endl

// ************************************************************************** //
//                               DiamondTrap Class                             //
// ************************************************************************** //

class DiamondTrap {

public:

	DiamondTrap( void );
	DiamondTrap( DiamondTrap const & src );
	~DiamondTrap( void );
	DiamondTrap & operator = ( DiamondTrap const & rhs );

private:



};

std::ostream &  operator << ( std::ostream & o, DiamondTrap const & p);

#endif /* __DIAMOND_TRAP_H__ */
