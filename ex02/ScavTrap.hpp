/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isahmed <isahmed@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/20 17:05:43 by isahmed           #+#    #+#             */
/*   Updated: 2026/02/21 13:41:23 by isahmed          ###   ########.fr       */
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
		ScavTrap(const ScavTrap &st);
		~ScavTrap(void);
		ScavTrap	&operator=(const ScavTrap& rhs);

		ScavTrap(std::string name);
		void	guardGate(void);
};


