/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isahmed <isahmed@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/20 16:24:01 by isahmed           #+#    #+#             */
/*   Updated: 2026/01/26 16:03:15 by isahmed          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name) : name_(name), hit_(10), energy_(10), damage_(0) 
{
	std::cout << "ClapTrap " << this->name_ << " has been constructed" << std::endl;
}

ClapTrap::~ClapTrap(void)
{
	std::cout << "ClapTrap " << this->name_ << " has been destructed" << std::endl;
}

ClapTrap::ClapTrap(ClapTrap &ct) : name_(ct.name_), hit_(ct.hit_), energy_(ct.energy_), damage_(ct.damage_)
{
	std::cout << "ClapTrap " << this->name_ << " has been cloned" << std::endl;
}

void	ClapTrap::attack(const std::string &target)
{
	if (this->energy_ <= 0)
	{
		std::cout << this->name_ << " can't repair itself: No energy" << std::endl;
		return ;
	}
	else if (this->hit_ <= 0)
	{
		std::cout << this->name_ << " can't repair itself: No hit points" << std::endl;
		return ;
	}
	this->energy_ --;
	std::cout << this->name_ << " attacks " << target <<", causing " << this->damage_ << " points of damage!" << std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	this->hit_ -= amount;
	std::cout << this->name_ << " has taken " << amount << " damage!" << std::endl;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (this->energy_ <= 0)
	{
		std::cout << this->name_ << " can't repair itself: No energy" << std::endl;
		return ;
	}
	else if (this->hit_ <= 0)
	{
		std::cout << this->name_ << " can't repair itself: No hit points" << std::endl;
		return ;
	}
	this->hit_ += amount;
	this->energy_ --;
	std::cout << this->name_ << " repaired itself by " << amount <<" points!" << std::endl;
}

