/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmaillar <tmaillar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/23 15:00:33 by tmaillar          #+#    #+#             */
/*   Updated: 2024/05/24 10:00:30 by tmaillar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/HumanB.hpp"
#include "../include/Weapon.hpp"
#include <string>
#include <iostream>

HumanB::HumanB(std::string name) : _name(name)
{
    
}

HumanB::~HumanB()
{
    
}

std::string HumanB::get_name() const
{
    return (_name);
}

void    HumanB::attack() const
{
    if (_weapon)
    {
        std::cout << _name << " attack with their weapon " 
        << _weapon->getType() << std::endl;
    }
    else
        std::cout << "erreur on weapons" << std::endl;
}

void    HumanB::setWeapon(Weapon &weapon)
{
    _weapon = &weapon;
}
