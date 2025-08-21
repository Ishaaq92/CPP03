/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isahmed <isahmed@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/21 16:59:42 by isahmed           #+#    #+#             */
/*   Updated: 2025/08/21 18:19:28 by isahmed          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
	std::cout << "FragTrap was constructed" << std::endl;
	this->hit_ = 100;
	this->energy_ = 100;
	this->damage_= 30;
}

FragTrap::~FragTrap(void)
{
	std::cout << "FragTrap was destructed" << std::endl;
}

void    FragTrap::highFivesGuys(void)
{
	std::cout << "High Five request from FragTrap" << std::endl;
}

