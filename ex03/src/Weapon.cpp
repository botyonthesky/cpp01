/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmaillar <tmaillar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/23 15:00:39 by tmaillar          #+#    #+#             */
/*   Updated: 2024/06/14 07:00:17 by tmaillar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Weapon.hpp"

Weapon::Weapon(std::string type) : _type(type)
{
    
}

Weapon::~Weapon()
{
    
}

std::string const   Weapon::getType()
{
    return (_type);
}

void    Weapon::setType(const std::string type)
{
    _type = type;
}