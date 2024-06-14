/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmaillar <tmaillar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/23 15:00:27 by tmaillar          #+#    #+#             */
/*   Updated: 2024/06/14 07:13:24 by tmaillar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
#define HUMANB_HPP

#include <string>
#include <iostream>
#include "../include/Weapon.hpp"

class HumanB
{
    public:
        HumanB(std::string name);
        ~HumanB(); 
        void            attack(void) const;
        void            setWeapon(Weapon &weapon);
    private:
        std::string     _name;
        Weapon          *_weapon;
};

#endif