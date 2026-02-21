/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isahmed <isahmed@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/21 16:57:00 by isahmed           #+#    #+#             */
/*   Updated: 2026/02/21 13:45:45 by isahmed          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include <iostream>
# include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
	private:

	protected:

    public:
        FragTrap(void);
        FragTrap(const FragTrap &ft);
        FragTrap(std::string name);
        ~FragTrap(void);
		FragTrap	&operator=(const FragTrap &rhs);
        void    highFivesGuys(void);
};

