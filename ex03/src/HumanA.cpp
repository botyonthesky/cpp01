/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmaillar <tmaillar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/23 15:00:31 by tmaillar          #+#    #+#             */
/*   Updated: 2024/06/14 07:11:20 by tmaillar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/HumanA.hpp"
#include "../include/Weapon.hpp"
#include <string>
#include <iostream>

HumanA::HumanA(std::string name, Weapon &Weapon) : _name(name), _Weapon(Weapon)
{

}

HumanA::~HumanA()
{

}

void    HumanA::attack() const
{
    std::cout << _name << " attacks with their " << _Weapon.getType() << std::endl;
}


