/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isahmed <isahmed@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/20 16:18:05 by isahmed           #+#    #+#             */
/*   Updated: 2026/02/21 13:34:07 by isahmed          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>

class ClapTrap
{
	private:
		std::string	name_;
		int			hit_;
		int			energy_ ;
		int			damage_ ;
	
	protected:

	public:
		ClapTrap(std::string name);
		ClapTrap(const ClapTrap &ct);
		~ClapTrap(void);
		ClapTrap	&operator=(const ClapTrap& rhs);
		void	attack(const std::string &target);
		void	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int amount);

};
