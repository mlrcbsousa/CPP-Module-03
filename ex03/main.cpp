/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msousa <mlrcbsousa@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/26 17:56:49 by msousa            #+#    #+#             */
/*   Updated: 2022/04/07 22:28:01 by msousa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int	main( void )
{
	DiamondTrap diamond("Ever");

	LOG(diamond);

	diamond.attack("Rock");

	diamond.takeDamage(5);

	diamond.beRepaired(1);
	diamond.beRepaired(1);

	diamond.takeDamage(7);
	diamond.takeDamage(2);

	diamond.highFivesGuys();
	diamond.guardGate();
	diamond.whoAmI();

	DiamondTrap bob;
	bob = diamond;

	return 0;
}
