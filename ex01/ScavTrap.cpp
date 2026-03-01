/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ishaaq <ishaaq@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/20 17:38:55 by isahmed           #+#    #+#             */
/*   Updated: 2026/03/01 06:23:29 by ishaaq           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include <iostream>
	
ScavTrap::ScavTrap(void) : ClapTrap("No Name")
{
	std::cout << "ScavTrap " << this->name_ << " has been constructed" << std::endl;
	this->hit_ = 100;
	this->energy_ = 50;
	this->damage_ = 20;
}

void	ScavTrap::attack(const std::string& target)
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
	std::cout << "ScavTrap:" <<  this->name_ << " attacks " << target <<", causing " << this->damage_ << " points of damage!" << std::endl;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name) 
{
	std::cout << "ScavTrap " << this->name_ << " has been constructed" << std::endl;
	this->hit_ = 100;
	this->energy_ = 50;
	this->damage_ = 20;
}

ScavTrap	&ScavTrap::operator=(const ScavTrap &rhs)
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

ScavTrap::ScavTrap(const ScavTrap &st) : ClapTrap(st) 
{
	std::cout << "ScavTrap " << this->name_ << " has been cloned" << std::endl;
}

ScavTrap::~ScavTrap(void)
{
	std::cout << "ScavTrap " << this->name_ << " has been destructed" << std::endl;
}

void	ScavTrap::guardGate(void)
{
	std::cout << "ScavTrap is now in Gate keeper mode" << std::endl;
}
