/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isahmed <isahmed@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/21 16:59:42 by isahmed           #+#    #+#             */
/*   Updated: 2026/01/26 19:25:12 by isahmed          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(void)
{
	this->hit_ = 100;
    this->energy_ = 100;
    this->damage_ = 30;
    std::cout << "FragTrap default constructor called" << std::endl;}

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
	std::cout << "FragTrap was constructed" << std::endl;
	this->hit_ = 100;
	this->energy_ = 100;
	this->damage_= 30;
}

FragTrap	&FragTrap::operator=(const FragTrap &rhs)
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

FragTrap::~FragTrap(void)
{
	std::cout << "FragTrap was destructed" << std::endl;
}

void    FragTrap::highFivesGuys(void)
{
	std::cout << "High Five request from FragTrap" << std::endl;
}

