/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msousa <mlrcbsousa@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/26 17:56:49 by msousa            #+#    #+#             */
/*   Updated: 2022/04/06 10:54:57 by msousa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

void	attack(ClapTrap & a, std::string const & target)
{
	a.attack(target);
}

int	main( void )
{
	ScavTrap scav("Sceeve");

	LOG(scav);

	scav.attack("other");
	attack(scav, "other");

	scav.takeDamage(5);

	scav.beRepaired(1);
	scav.beRepaired(1);

	scav.takeDamage(7);
	scav.takeDamage(2);

	scav.guardGate();

	ScavTrap bob;
	bob = scav;

	return 0;
}
