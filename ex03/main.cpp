/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ritavasques <ritavasques@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/09 16:21:51 by ritavasques       #+#    #+#             */
/*   Updated: 2024/09/10 11:28:46 by ritavasques      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int main( void ) {
	DiamondTrap diamond = DiamondTrap("Diamond");
	ClapTrap clap = ClapTrap("Clap");

	diamond.attack("Clap");
    clap.attack("Diamond");
    diamond.takeDamage(5);
    diamond.beRepaired(2);
    diamond.attack("Clap");
	clap.attack("Diamond");
    clap.takeDamage(98);
    diamond.whoAmI();
    
	return (0);
}
