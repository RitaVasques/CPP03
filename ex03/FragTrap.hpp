/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ritavasques <ritavasques@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/09 16:23:01 by ritavasques       #+#    #+#             */
/*   Updated: 2024/09/10 11:07:56 by ritavasques      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap {
	public:
		FragTrap( void );
		FragTrap( std::string name );
		FragTrap( const FragTrap& other ); 
		~FragTrap( void );

		FragTrap& operator=( const FragTrap& other );
		
		void attack(const std::string& target );
		void highFivesGuys( void );
	protected:
		static unsigned int const	_hp;
		static unsigned int const	_enrg;
		static unsigned int const	_attack;
};

#endif