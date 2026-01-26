/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isahmed <isahmed@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/20 16:37:13 by isahmed           #+#    #+#             */
/*   Updated: 2026/01/26 18:35:53 by isahmed          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main(void)
{
	// Test Case: Normal
    ScavTrap	a("Alice");
	std::cout << "\nTest Case: Normal" << std::endl;
    a.takeDamage(40);
    a.beRepaired(0);
	a.guardGate();

	// Test Case: Hit points 
    ScavTrap	b("Bob");
	std::cout << "\nTest Case: Run out of hit points" << std::endl;
    b.takeDamage(60);
    b.beRepaired(10);
    b.takeDamage(60);
    b.beRepaired(42);
	b.guardGate();

	// Test Case: Energy
    ScavTrap	c("Charlie");
	std::cout << "\nTest Case: Run out of energy" << std::endl;
	for (int i=0;i<25;i++)
	{
		c.attack("Daniel");
		c.beRepaired(1);
	}
	c.guardGate();
	std::cout << std::endl;
}

