/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ritavasques <ritavasques@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/09 12:31:31 by ritavasques       #+#    #+#             */
/*   Updated: 2024/09/09 15:33:53 by ritavasques      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <iostream>

class ClapTrap {
	public:
		ClapTrap( void );
		ClapTrap( std::string name );
		ClapTrap( const ClapTrap& other );
		~ClapTrap( void );

		ClapTrap& operator=( const ClapTrap& other );
		
		std::string getName( void ) const;
		unsigned int getHitPoints( void ) const;
		unsigned int getEnergy( void ) const;
		unsigned int getAttackDamage( void ) const;
		void setName( std::string name );
		void setHit( unsigned int amount );
		void setEnergy( unsigned int amount );
		void setAttack( unsigned int amount);

		void	attack(const std::string& target);
		void	takeDamage( unsigned int amount );
		void	beRepaired( unsigned int amount );
	private:
    	std::string 	_name;
	    unsigned int	_hitPoints;
		unsigned int	_energy;
		unsigned int	_attackDamage;
};

#endif