/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ishaaq <ishaaq@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/20 16:37:13 by isahmed           #+#    #+#             */
/*   Updated: 2026/02/21 14:36:50 by isahmed          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int main(void)
{
    DiamondTrap    a("Alice");
    DiamondTrap   b("Bob");

    b.attack("Alice");
	b.highFivesGuys();
    a.takeDamage(42);
    a.beRepaired(22);
	a.whoAmI();
	b.whoAmI();
}
