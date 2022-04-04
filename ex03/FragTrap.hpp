/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msousa <mlrcbsousa@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/04 20:01:54 by msousa            #+#    #+#             */
/*   Updated: 2022/04/04 20:02:12 by msousa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __FRAG_TRAP_H__
# define __FRAG_TRAP_H__

# include <iostream>

// ************************************************************************** //
//                               FragTrap Class                               //
// ************************************************************************** //

class FragTrap {

public:

	FragTrap( void );
	FragTrap( FragTrap const & src );
	~FragTrap( void );
	FragTrap & operator = ( FragTrap const & rhs );

private:



};

std::ostream &  operator << ( std::ostream & o, FragTrap const & p);

#endif /* __FRAG_TRAP_H__ */
