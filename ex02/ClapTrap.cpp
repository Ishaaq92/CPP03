/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ishaaq <ishaaq@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/20 16:24:01 by isahmed           #+#    #+#             */
/*   Updated: 2026/03/01 06:18:26 by ishaaq           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name) : name_(name), hit_(10), energy_(10), damage_(0) 
{
	std::cout << "ClapTrap " << this->name_ << " has been constructed" << std::endl;
}

ClapTrap::ClapTrap(void) : name_("No Name"), hit_(10), energy_(10), damage_(0) 
{
	std::cout << "ClapTrap default constructor called" << std::endl;
}

ClapTrap::~ClapTrap(void)
{
	std::cout << "ClapTrap " << this->name_ << " has been destructed" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &ct) : name_(ct.name_), hit_(ct.hit_), energy_(ct.energy_), damage_(ct.damage_)
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

ClapTrap	&ClapTrap::operator=(const ClapTrap& rhs)
{
	if (this == &rhs)
		return;
	this->name_ = rhs.name_;
	this->hit_ = rhs.hit_;
	this->energy_ = rhs.energy_;
	this->damage_ = rhs.damage_;

	return (*this);
}
