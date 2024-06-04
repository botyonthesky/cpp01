/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmaillar <tmaillar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/23 08:06:46 by tmaillar          #+#    #+#             */
/*   Updated: 2024/05/23 11:04:26 by tmaillar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Zombie.hpp"

Zombie::Zombie(std::string name) : _name(name)
{
    std::cout << "Creating the Zombie, name: " << name << std::endl;
}

Zombie::~Zombie()
{
    std::cout << "Destruction the Zombie, name: " << get_name() << std::endl;
}

std::string Zombie::get_name()
{
    return (_name);
}

void    Zombie::announce(void)
{
    std::cout << get_name() << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
