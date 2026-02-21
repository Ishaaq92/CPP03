/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isahmed <isahmed@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/20 16:24:01 by isahmed           #+#    #+#             */
/*   Updated: 2026/02/21 13:40:56 by isahmed          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void)
{
	*this = ClapTrap("No Name");
}

ClapTrap::ClapTrap(std::string name) : name_(name), hit_(10), energy_(10), damage_(0) 
{
	std::cout << "ClapTrap " << this->name_ << " has been constructed" << std::endl;
}

ClapTrap	&ClapTrap::operator=(const ClapTrap &rhs)
{
	if (this != &rhs)
	{
		this->name_ = rhs.name_;
		this->hit_ = rhs.hit_;
		this->energy_ = rhs.energy_;
		this->damage_ = rhs.damage_;
	}
	return (*this);
}

ClapTrap::~ClapTrap(void)
{
	std::cout << "ClapTrap " << this->name_ << " has been destructed" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &ct) : name_(ct.name_), hit_(ct.hit_), energy_(ct.energy_), damage_(ct.damage_) 
{
	std::cout << "ClapTrap " << this->name_ << " has been cloned" << std::endl;
}

void	ClapTrap::attack(const std::string& target)
{
	this->energy_ --;
	std::cout << this->name_ << " attacks " << target <<", causing " << this->damage_ << " points of damage!" << std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	this->hit_ -= amount;
	std::cout << this->name_ << " has taken " << amount <<" damage!" << std::endl;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	this->hit_ += amount;
	this->energy_ --;
	std::cout << this->name_ << " repaired itself by " << amount <<" points!" << std::endl;
}



// void	ClapTrap::set_hit(int val)
// {
// 	this->hit_ = val;
// }
// void	ClapTrap::set_energy(int val)
// {
// 	this->energy_ = val;
// }
// void	ClapTrap::set_damage(int val)
// {
// 	this->damage_ = val;
// }
