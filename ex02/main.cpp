/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msousa <mlrcbsousa@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/26 17:56:49 by msousa            #+#    #+#             */
/*   Updated: 2022/04/06 11:07:24 by msousa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

void	attack(ClapTrap & a, std::string const & target)
{
	a.attack(target);
}

int	main( void )
{
	FragTrap frag("Sceeve");

	LOG(frag);

	frag.attack("other");
	attack(frag, "other");

	frag.takeDamage(5);

	frag.beRepaired(1);
	frag.beRepaired(1);

	frag.takeDamage(7);
	frag.takeDamage(2);

	frag.highFivesGuys();

	FragTrap bob;
	bob = frag;

	return 0;
}
