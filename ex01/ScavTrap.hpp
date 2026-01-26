/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isahmed <isahmed@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/20 17:05:43 by isahmed           #+#    #+#             */
/*   Updated: 2026/01/26 18:49:24 by isahmed          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include <iostream>
# include "ClapTrap.hpp" 

class ScavTrap : public ClapTrap
{
	private:

	protected:

	public:
		ScavTrap(void);
		ScavTrap(ScavTrap &st);
		~ScavTrap(void);
		ScavTrap	&operator=(const ScavTrap& rhs);

		ScavTrap(std::string name);
		void	guardGate(void);
};


