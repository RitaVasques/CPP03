/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ritavasques <ritavasques@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 10:14:24 by ritavasques       #+#    #+#             */
/*   Updated: 2024/09/10 11:34:34 by ritavasques      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

//CONSTRUCTOR
DiamondTrap::DiamondTrap( void ) {
    std::cout << "DiamondTrap default constructor called" << std::endl;
    this->_name = "";
    this->_hitPoints = FragTrap::_hp;
    this->_energy = ScavTrap::_enrg;
    this->_attackDamage = FragTrap::_attack;
}

DiamondTrap::DiamondTrap( std::string name ) : _name( name ) {
    std::cout << "Diamond constructor called" << std::endl;
    ClapTrap::_name = _name + "_clap_name";
    this->_hitPoints = FragTrap::_hp;
    this->_energy = ScavTrap::_enrg;
    this->_attackDamage = FragTrap::_attack;
}

DiamondTrap::DiamondTrap( const DiamondTrap& other ) {
    std::cout << "Diamond copy constructor called" << std::endl;
    *this = other;
}

//DESTRUCTOR
DiamondTrap::~DiamondTrap( void ) {
    std::cout << "Diamond destructor called" << std::endl;
}

//ASSIGMENT OPERATOR
DiamondTrap& DiamondTrap::operator=( const DiamondTrap& other ) {
    ClapTrap::operator=( other );
    this->_name = other._name;
    return (*this);
}

void DiamondTrap::attack( const std::string& target ) {
    ScavTrap::attack( target );
}

void DiamondTrap::whoAmI( void ) {
    std::cout << "DiamondTrap's name is " << this->_name;
    std::cout << ", his ClapTrap's name is " << this->ClapTrap::_name << std::endl; 
}