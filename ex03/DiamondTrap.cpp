/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ishaaq <ishaaq@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/21 18:21:00 by isahmed           #+#    #+#             */
/*   Updated: 2026/03/01 06:59:10 by ishaaq           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name + "_clap_name")
{
	this->name_ = name;
	this->hit_ = 100;
	this->energy_ = 50;
	this->damage_ = 30;
	std::cout << "DiamondTrap was constructed" << std::endl;
}

DiamondTrap::DiamondTrap(void) : ClapTrap("no_name_clap_name")
{
	this->name_ = "no_name";
	this->hit_ = 100;
	this->energy_ = 50;
	this->damage_ = 30;
	std::cout << "DiamondTrap was constructed" << std::endl;
}

DiamondTrap::~DiamondTrap(void)
{
	std::cout << "DiamondTrap was destructed" << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap &dt) : ClapTrap(dt), ScavTrap(dt), FragTrap(dt), name_(dt.name_)
{
	std::cout << "DiamondTrap " << dt.name_ << " has been cloned" << std::endl;
}

void	DiamondTrap::whoAmI(void)
{
	std::cout << "I am " << this->name_ << " and " << this->ClapTrap::name_ << std::endl;
	std::cout << this->hit_ <<", " << this->energy_ << ", " << this->damage_ << "."  << std::endl;
}

void	DiamondTrap::attack(const std::string& target)
{
	ScavTrap::attack(target);
}

DiamondTrap &DiamondTrap::operator=(const DiamondTrap &rhs)
{
    if (this != &rhs)
    {
        ClapTrap::operator=(rhs);
		this->name_ = rhs.name_;
    }
    return (*this);
}
