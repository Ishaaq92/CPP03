/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ishaaq <ishaaq@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/20 16:24:01 by isahmed           #+#    #+#             */
/*   Updated: 2025/08/22 10:19:41 by ishaaq           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name) : name_(name), hit_(10), energy_(10), damage_(0) 
{
	std::cout << "ClapTrap " << name << " has been constructed" << std::endl;
}

ClapTrap::ClapTrap(void)
{
	std::cout << "ClapTrap " << this->name_ << " has been constructed" << std::endl;
}

ClapTrap::~ClapTrap(void)
{
	std::cout << "ClapTrap " << this->name_ << " has been destructed" << std::endl;
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

