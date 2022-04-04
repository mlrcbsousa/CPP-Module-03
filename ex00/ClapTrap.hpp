/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msousa <mlrcbsousa@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/04 19:40:57 by msousa            #+#    #+#             */
/*   Updated: 2022/04/04 22:05:59 by msousa           ###   ########.fr       */
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
	ClapTrap( ClapTrap const & src );
	~ClapTrap( void );
	ClapTrap & operator = ( ClapTrap const & rhs );

private:



};

std::ostream &  operator << ( std::ostream & o, ClapTrap const & p);

#endif /* __CLAP_TRAP_H__ */
