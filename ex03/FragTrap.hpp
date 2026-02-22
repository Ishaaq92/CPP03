/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ishaaq <ishaaq@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/21 16:57:00 by isahmed           #+#    #+#             */
/*   Updated: 2026/02/22 10:22:56 by ishaaq           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include <iostream>
# include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap
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

