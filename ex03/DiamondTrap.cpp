/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ishaaq <ishaaq@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/21 18:21:00 by isahmed           #+#    #+#             */
/*   Updated: 2025/08/22 11:26:04 by ishaaq           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name + "_clap_name")
{
	this->name_ = name;
	this->hit_ = FragTrap::hit_;
	this->energy_ = ScavTrap::energy_;
	this->damage_ = ScavTrap::damage_;
	std::cout << "DiamondTrap was constructed" << std::endl;
}

DiamondTrap::~DiamondTrap(void)
{
	std::cout << "DiamondTrap was destructed" << std::endl;
}
void	DiamondTrap::whoAmI(void)
{
	std::cout << "I am " << this->name_ << " and " << this->ClapTrap::name_ << std::endl;
}

void	DiamondTrap::attack(const std::string& target)
{
	ScavTrap::attack(target);
}
