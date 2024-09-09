/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ritavasques <ritavasques@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/09 12:31:17 by ritavasques       #+#    #+#             */
/*   Updated: 2024/09/09 18:24:47 by ritavasques      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main(void) {

    ScavTrap scav = ScavTrap("Scav");
    ClapTrap clap = ClapTrap("Clap");

    scav.guardGate();
    scav.attack("Clap");
    clap.attack("Scav");
    scav.guardGate();
    scav.takeDamage(5);
    scav.guardGate();
    scav.beRepaired(2);
    scav.guardGate();
    scav.attack("Clap");
    clap.attack("Scav");
    scav.guardGate();
    scav.takeDamage(95);
    scav.guardGate();
    scav.attack("Clap");

    return (0);
}