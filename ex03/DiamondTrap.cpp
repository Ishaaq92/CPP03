/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isahmed <isahmed@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/21 18:21:00 by isahmed           #+#    #+#             */
/*   Updated: 2026/02/21 15:40:56 by isahmed          ###   ########.fr       */
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

DiamondTrap::DiamondTrap(const DiamondTrap &dt) : ClapTrap(dt), ScavTrap(dt), FragTrap(dt)
{
	this->name_ = dt.name_;
	this->hit_ = dt.hit_;
	this->energy_ = dt.energy_;
	this->damage_ = dt.damage_;
	std::cout << "DiamondTrap was cloned" << std::endl;
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
		this->hit_ = rhs.hit_;
		this->energy_ = rhs.energy_;
		this->damage_ = rhs.damage_;
    }
    return (*this);
}
