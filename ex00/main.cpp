/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isahmed <isahmed@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/20 16:37:13 by isahmed           #+#    #+#             */
/*   Updated: 2025/08/20 16:40:25 by isahmed          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main(void)
{
    ClapTrap    a("Alice");
    ClapTrap    b("Bob");

    b.attack("Alice");
    a.takeDamage(42);
    a.beRepaired(22);
}
