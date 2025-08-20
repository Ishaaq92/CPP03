/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isahmed <isahmed@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/20 17:05:43 by isahmed           #+#    #+#             */
/*   Updated: 2025/08/20 17:37:43 by isahmed          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include "ClapTrap.hpp" 

class ScavTrap : public ClapTrap
{
	public:
		ScavTrap(std::string name);
		~ScavTrap(void);
};