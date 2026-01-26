/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isahmed <isahmed@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/20 17:38:55 by isahmed           #+#    #+#             */
/*   Updated: 2026/01/26 19:05:24 by isahmed          ###   ########.fr       */
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

ScavTrap::ScavTrap(ScavTrap &st) : ClapTrap(st.name_) 
{
	std::cout << "ScavTrap " << this->name_ << " has been cloned" << std::endl;
	this->hit_ = st.hit_;
	this->energy_ = st.energy_;
	this->damage_ = st.damage_;
}

ScavTrap::~ScavTrap(void)
{
	std::cout << "ScavTrap " << this->name_ << " has been destructed" << std::endl;
}

void	ScavTrap::guardGate(void)
{
	std::cout << "ScavTrap is now in Gate keeper mode" << std::endl;
}

