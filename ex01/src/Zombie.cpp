/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmaillar <tmaillar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/23 09:22:57 by tmaillar          #+#    #+#             */
/*   Updated: 2024/06/07 11:50:53 by tmaillar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Zombie.hpp"

Zombie::Zombie()
{
    std::cout << "Creation" << std::endl;
}

Zombie::~Zombie()
{
    std::cout << "Destruction of : " << get_name() << std::endl;
}

std::string Zombie::get_name()
{
    return (_name);
}

void    Zombie::set_name(std::string &name)
{
    _name = name;
}

void    Zombie::announce(void)
{
    std::cout << get_name() << ": BraiiiiiiinnnzzzZ..." << std::endl;
}