/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msousa <mlrcbsousa@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/26 17:56:49 by msousa            #+#    #+#             */
/*   Updated: 2022/04/06 09:53:10 by msousa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int	main( void )
{
	ClapTrap clap("Beep");

	LOG(clap);

	clap.attack("Jerry");
	clap.attack("Jerry");
	clap.attack("Jerry");
	clap.attack("Jerry");
	clap.attack("Jerry");
	clap.attack("Jerry");
	clap.attack("Jerry");
	clap.attack("Jerry");
	clap.attack("Jerry");

	clap.takeDamage(5);

	clap.beRepaired(1);
	clap.beRepaired(1);

	clap.takeDamage(7);
	clap.takeDamage(2);

	return 0;
}
