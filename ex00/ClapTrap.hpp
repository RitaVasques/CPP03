/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ritavasques <ritavasques@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/09 12:31:31 by ritavasques       #+#    #+#             */
/*   Updated: 2024/09/09 12:44:55 by ritavasques      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <iostream>

class ClapTrap {
	private:
    	std::string 	_name;
	    unsigned int	_health;
		unsigned int	_energy;
		unsigned int	_atackDamage;
	public:
		ClapTrap( void );
		ClapTrap( std::string name );
		ClapTrap( const ClapTrap& other );
		~ClapTrap( void );

		ClapTrap& operator=( const ClapTrap& other );
		
		void	attack(const std::string& target);
		void	takeDamage( unsigned int amount );
		void	beRepaired( unsigned int amount );
};

#endif