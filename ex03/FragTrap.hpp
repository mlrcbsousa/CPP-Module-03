/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msousa <mlrcbsousa@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/04 20:01:54 by msousa            #+#    #+#             */
/*   Updated: 2022/04/07 22:23:56 by msousa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __FRAG_TRAP_H__
# define __FRAG_TRAP_H__

# include "ClapTrap.hpp"

// ************************************************************************** //
//                               FragTrap Class                               //
// ************************************************************************** //

class FragTrap : public virtual ClapTrap {

public:

	FragTrap( void );
	FragTrap( std::string const & name );
	FragTrap( FragTrap const & src );
	~FragTrap( void );
	FragTrap & operator = ( FragTrap const & rhs );

	void	attack( const std::string & target );
	void 	highFivesGuys( void );

};

std::ostream &  operator << ( std::ostream & o, FragTrap const & p);

#endif /* __FRAG_TRAP_H__ */
