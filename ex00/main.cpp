/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isahmed <isahmed@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/20 16:37:13 by isahmed           #+#    #+#             */
/*   Updated: 2026/01/26 16:20:21 by isahmed          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main(void)
{
    ClapTrap    a("Alice");

	// Test case: Normal
	std::cout << "\nTest case: Normal" << std::endl;
    a.takeDamage(5);
    a.beRepaired(22);

	// Test case: Bob runs out of hit points
    ClapTrap    b("Bob");
	std::cout << "\nTest case: Bob runs out of hit points" << std::endl;
    b.takeDamage(10);
    b.beRepaired(22);

	// Test case: Charlie runs out of energy points
    ClapTrap    c("Charlie");
	std::cout << "\nTest case: Charlie runs out of energy points" << std::endl;
	for (int i=0;i<5;i++)
	{
		c.attack("Daniel");
		c.beRepaired(1);
	}
	c.beRepaired(42);
	std::cout << std::endl;
}
