/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ritavasques <ritavasques@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/09 12:31:17 by ritavasques       #+#    #+#             */
/*   Updated: 2024/09/09 13:48:49 by ritavasques      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main(void) {

    ClapTrap trap = ClapTrap("Trap");

    trap.attack("Clap");
    trap.takeDamage(5);
    trap.beRepaired(2);
    trap.attack("Clap");
    trap.takeDamage(10);
    trap.attack("Clap");

    return (0);
}