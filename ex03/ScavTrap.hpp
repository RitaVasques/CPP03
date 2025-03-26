/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ritavasques <ritavasques@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/09 15:42:53 by ritavasques       #+#    #+#             */
/*   Updated: 2024/09/10 11:08:38 by ritavasques      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include "ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap {
	public:
		ScavTrap( void );
		ScavTrap( std::string name );
		ScavTrap( const ScavTrap& other );
		~ScavTrap( void );

		ScavTrap& operator=( const ScavTrap& other );

		void attack(const std::string& target );
		void guardGate( void );
	protected:
		bool 		_gate;
		static unsigned int const	_hp;
		static unsigned int const	_enrg;
		static unsigned int const	_attack;
};

#endif
