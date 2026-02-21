/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isahmed <isahmed@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/20 16:18:05 by isahmed           #+#    #+#             */
/*   Updated: 2026/02/21 13:40:46 by isahmed          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
# include <iostream>

class ClapTrap
{
	private:

	protected:
		std::string	name_;
		int			hit_;
		int			energy_ ;
		int			damage_ ;

	public:
		ClapTrap(void);
		ClapTrap(std::string name);
		~ClapTrap(void);
		ClapTrap(const ClapTrap &ct);
		void	attack(const std::string& target);
		void	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int amount);
		ClapTrap	&operator=(const ClapTrap& rhs);
};

