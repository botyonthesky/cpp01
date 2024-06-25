/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmaillar <tmaillar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/23 15:00:33 by tmaillar          #+#    #+#             */
/*   Updated: 2024/06/14 11:46:34 by tmaillar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/HumanB.hpp"
#include "../include/Weapon.hpp"
#include <string>
#include <iostream>

HumanB::HumanB(std::string name) : _name(name)
{
    _weapon = NULL;
}

HumanB::~HumanB()
{
    
}

void    HumanB::attack() const
{
    if (_weapon != NULL)
    {
        std::cout << _name << " attack with their weapon " 
        << _weapon->getType() << std::endl;
    }
    else
        std::cout << _name << " has no weapon, he can't attack !" << std::endl;
}

void    HumanB::setWeapon(Weapon &weapon)
{
    _weapon = &weapon;
}
