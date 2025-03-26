/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ritavasques <ritavasques@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/09 15:43:06 by ritavasques       #+#    #+#             */
/*   Updated: 2024/09/10 11:00:51 by ritavasques      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "ScavTrap.hpp"

//STATIC PARAMETERS
unsigned int const ScavTrap::_hp = 100;
unsigned int const ScavTrap::_enrg = 50;
unsigned int const ScavTrap::_attack = 20;

//CONSTRUCTORS
ScavTrap::ScavTrap( void ) : _gate( false ) {
    std::cout << "ScavTrap default constructor called" << std::endl;
    this->_name = "";
    this->_hitPoints = 100;
    this->_energy = 50;
    this->_attackDamage = 20;
}

ScavTrap::ScavTrap( std::string name ) : ClapTrap( name ), _gate( false ) {
    std::cout << "ScavTrap constructor called" << std::endl;
    this->_hitPoints = 100;
    this->_energy = 50;
    this->_attackDamage = 20;
}

ScavTrap::ScavTrap( const ScavTrap& other ) : ClapTrap( other ) {
    std::cout << "ScavTrap copy constructor called" << std::endl;
    *this = other;
}

//DESTRUCTOR
ScavTrap::~ScavTrap( void ) {
    std::cout << "ScavTrap destructor called" << std::endl;
}

ScavTrap& ScavTrap::operator=( const ScavTrap& other ) {
    ClapTrap::operator=( other );
    this->_gate = other._gate;
    return ( *this );
}

void ScavTrap::guardGate( void ) {
    if (this->_hitPoints <= 3 )
        this->_gate = true;
    else
        this->_gate = false;
}

void	ScavTrap::attack(const std::string& target) {
    std::cout << "ScavTrap " << this->_name;
    
    if (this->_hitPoints == 0)
        std::cout << "is dead" << std::endl;
    else if (this->_gate)
        std::cout << "is guarding the gate" << std::endl;
    else if (this->_energy == 0)
        std::cout << "run out of energy" << std::endl;
    else
    {
        std::cout << " attacks " << target << ", causing " << this->_attackDamage << " points of damage!";
        std::cout << std::endl;
        this->_energy--;
    }
}