/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ritavasques <ritavasques@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/09 12:37:42 by ritavasques       #+#    #+#             */
/*   Updated: 2024/09/09 15:39:25 by ritavasques      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

//CONSTRUCTORS
ClapTrap::ClapTrap( void ) : _name(""), _hitPoints( 10 ), _energy( 10 ), _attackDamage( 0 ) {
    std::cout << "Default constructor called" << std::endl;
}

ClapTrap::ClapTrap( std::string name): _name(name), _hitPoints( 10 ), _energy( 10 ), _attackDamage( 0 ) {
    std::cout << "Constructor called" << std::endl;
}

ClapTrap::ClapTrap( const ClapTrap& other) {
    std::cout << "Copy constructor called" << std::endl;
    *this = other;
}

//DESTRUCTORS
ClapTrap::~ClapTrap( void ) {
    std::cout << "Destructor called" << std::endl;
}

//ASSIGNMENT OPERATOR
ClapTrap& ClapTrap::operator=( const ClapTrap& other ) {
    std::cout << "asignment operator called" << std::endl;
    this->_name = other._name;
    this->_hitPoints = other._hitPoints;
    this->_energy = other._energy;
    this->_attackDamage = other._attackDamage;
    return (*this);
}

//GETTERS
std::string ClapTrap::getName( void ) const {
    return (this->_name);
}

unsigned int ClapTrap::getHitPoints( void ) const {
    return (this->_hitPoints);
}

unsigned int ClapTrap::getEnergy( void ) const {
    return (this->_energy);
}

unsigned int ClapTrap::getAttackDamage( void ) const {
    return (this->_attackDamage);
}

//SETTERS
void ClapTrap::setName( std::string name ) { this->_name = name; }

void ClapTrap::setHit( unsigned int amount ) { this->_hitPoints = amount; }

void ClapTrap::setEnergy( unsigned int amount ) { this->_energy = amount; }

void ClapTrap::setAttack( unsigned int amount ) { this->_attackDamage = amount; }

//OTHER FUNCTIONS
void	ClapTrap::attack(const std::string& target) {
    std::cout << "ClapTrap " << this->_name;
    
    this->_attackDamage = 3;
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

void	ClapTrap::takeDamage( unsigned int amount ) {
    std::cout << "ClapTrap " << this->_name;
    
    if (this->_hitPoints == 0)
        std::cout << " is dead" << std::endl;
    else if (amount >= this->_hitPoints) 
    {
        std::cout << " was destroyed" << std::endl;
        this->_hitPoints = 0;
    }
    else
    {
        std::cout << " was hit with " << amount;
        this->_hitPoints -= amount;
        std::cout << ". Current hit points: " << this->_hitPoints << std::endl;
    }
    
}

void	ClapTrap::beRepaired( unsigned int amount ) {
    std::cout << "ClapTrap " << this->_name;

    if (this->_hitPoints == 0)
        std::cout << " is dead" << std::endl;
    else if (this->_energy == 0) 
        std::cout << " has no energy to repair itself" << std::endl;
    else
    {
        this->_energy--;
        std::cout << " was repaired with " << amount;
        this->_hitPoints += amount;
        std::cout << ". Current hit points: " << this->_hitPoints;
        std::cout << ". Current energy: " << this->_energy << std::endl;
    }
}
