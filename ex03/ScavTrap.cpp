/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ishaaq <ishaaq@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/20 17:38:55 by isahmed           #+#    #+#             */
/*   Updated: 2025/08/22 11:02:20 by ishaaq           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include <iostream>

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	std::cout << "ScavTrap " << name << " has been constructed" << std::endl;
}

ScavTrap::ScavTrap(void) 
{
	std::cout << "ScavTrap "  << " has been constructed" << std::endl;
}

ScavTrap::~ScavTrap(void) 
{
	std::cout << "ScavTrap "  << " has been destructed" << std::endl;
}
