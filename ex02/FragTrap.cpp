/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ritavasques <ritavasques@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 09:32:04 by ritavasques       #+#    #+#             */
/*   Updated: 2024/09/10 09:53:59 by ritavasques      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

//CONSTRUCTORES
FragTrap::FragTrap( void ) : ClapTrap() {
    std::cout << "FragTrap default constructor called" << std::endl;
    this->_name = "";
    this->_hitPoints = 100;
    this->_energy = 100;
    this->_attackDamage = 30;
}

FragTrap::FragTrap( std::string name ) : ClapTrap( name ) {
    std::cout << "FragTrap constructor called" << std::endl;
    this->_hitPoints = 100;
    this->_energy = 100;
    this->_attackDamage = 30;
}

FragTrap::FragTrap( const FragTrap& other ) {
    std::cout << "FragTrap copy constructor called" << std::endl;
    *this = other;
}

//DESTRUCTOR
FragTrap::~FragTrap( void ) {
    std::cout << "FragTrap destructor called" << std::endl;
}

//ASSIGNMENT OPERATOR
FragTrap& FragTrap::operator=( const FragTrap& other ) {
    ClapTrap::operator= ( other );
    return ( *this );
}

void	FragTrap::attack(const std::string& target) {
    std::cout << "FragTrap " << this->_name;
    
    if (this->_hitPoints == 0)
        std::cout << "is dead" << std::endl;
    else if (this->_energy == 0)
        std::cout << "run out of energy" << std::endl;
    else
    {
        std::cout << " attacks " << target << ", causing " << this->_attackDamage << " points of damage!";
        std::cout << std::endl;
        this->_energy--;
    }
}

void FragTrap::highFivesGuys( void ) {
    std::cout << "FragTrap " << this->_name << " - ";
    if (this->_hitPoints == 0)
        std::cout << "is dead" << std::endl;
    else if (this->_energy == 0)
        std::cout << "no energy for high fives" << std::endl;
    else
        std::cout << "please give me a positive high five?" << std::endl;
}
