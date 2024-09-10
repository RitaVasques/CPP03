/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ritavasques <ritavasques@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/09 16:21:51 by ritavasques       #+#    #+#             */
/*   Updated: 2024/09/10 10:09:46 by ritavasques      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int main( void ) {
	FragTrap frag = FragTrap("Frag");
	ClapTrap clap = ClapTrap("Clap");

	frag.highFivesGuys();
    frag.attack("Clap");
    clap.attack("Frag");
    frag.takeDamage(5);
    frag.beRepaired(2);
    frag.highFivesGuys();
    frag.attack("Clap");
	clap.attack("Frag");
    frag.takeDamage(98);
    
	return (0);
}
