/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmaillar <tmaillar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/23 09:22:57 by tmaillar          #+#    #+#             */
/*   Updated: 2024/06/14 06:38:59 by tmaillar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Zombie.hpp"

Zombie::Zombie()
{
    std::cout << "Basic constructor" << std::endl;
}
Zombie::Zombie(std::string name) : _name(name)
{
    std::cout << "Constructor of : " << _name << std::endl;
}
Zombie::~Zombie()
{
    std::cout << "Destruction of : " << _name << std::endl;
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
    std::cout << _name << " :BraiiiiiiinnnzzzZ..." << std::endl;
}