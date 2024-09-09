/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ritavasques <ritavasques@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/09 12:37:42 by ritavasques       #+#    #+#             */
/*   Updated: 2024/09/09 13:56:51 by ritavasques      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

//CONSTRUCTORS
ClapTrap::ClapTrap( void ) : _name(""), _health( 10 ), _energy( 10 ), _atackDamage( 0 ) {
    std::cout << "Default constructor called" << std::endl;
}

ClapTrap::ClapTrap( std::string name): _name(name), _health( 10 ), _energy( 10 ), _atackDamage( 0 ) {
    std::cout << "Constructor called" << std::endl;
}

ClapTrap::ClapTrap( const ClapTrap& other) {
    std::cout << "Copy constructor called" << std::endl;
    *this = other;
}

//DESTRUCTURS
ClapTrap::~ClapTrap( void ) {
    std::cout << "Destructor called" << std::endl;
}

//ASSIGNMENT OPERATOR
ClapTrap& ClapTrap::operator=( const ClapTrap& other ) {
    std::cout << "asignment operator called" << std::endl;
    this->_name = other._name;
    this->_health = other._health;
    this->_energy = other._energy;
    this->_atackDamage = other._atackDamage;
    return (*this);
}

void	ClapTrap::attack(const std::string& target) {
    std::cout << "ClapTrap " << this->_name;
    
    this->_atackDamage = 3;
    if (this->_health == 0)
        std::cout << "is dead" << std::endl;
    else if (this->_energy == 0)
        std::cout << "run out of energy" << std::endl;
    else
    {
        std::cout << " attacks " << target << ", causing " << this->_atackDamage << " points of damage!";
        std::cout << std::endl;
        this->_energy--;
    }
}

void	ClapTrap::takeDamage( unsigned int amount ) {
    std::cout << "ClapTrap " << this->_name;
    
    if (this->_health == 0)
        std::cout << " is dead" << std::endl;
    else if (amount >= this->_health) 
    {
        std::cout << " was destroyed" << std::endl;
        this->_health = 0;
    }
    else
    {
        std::cout << " was hit with " << amount;
        this->_health -= amount;
        std::cout << ". Current hit points: " << this->_health << std::endl;
    }
    
}

void	ClapTrap::beRepaired( unsigned int amount ) {
    std::cout << "ClapTrap " << this->_name;

    if (this->_health == 0)
        std::cout << " is dead" << std::endl;
    else if (this->_energy == 0) 
        std::cout << " has no energy to repair itself" << std::endl;
    else
    {
        this->_energy--;
        std::cout << " was repaired with " << amount;
        this->_health += amount;
        std::cout << ". Current hit points: " << this->_health;
        std::cout << ". Current energy: " << this->_energy << std::endl;
    }
}
