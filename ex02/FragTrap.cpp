/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ishaaq <ishaaq@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/21 16:59:42 by isahmed           #+#    #+#             */
/*   Updated: 2026/03/01 07:06:58 by ishaaq           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(void)
{
	this->hit_ = 100;
    this->energy_ = 100;
    this->damage_ = 30;
    std::cout << "FragTrap default constructor called" << std::endl;
}	

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
	std::cout << "FragTrap was constructed" << std::endl;
	this->hit_ = 100;
	this->energy_ = 100;
	this->damage_= 30;
}

FragTrap::FragTrap(const FragTrap &ft) : ClapTrap(ft)
{
	std::cout << "FragTrap " << this->name_ << " has been cloned" << std::endl;
}

FragTrap	&FragTrap::operator=(const FragTrap &rhs)
{
	if (this != &rhs)
		ClapTrap::operator=(rhs);
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
