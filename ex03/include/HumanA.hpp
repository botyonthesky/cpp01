/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmaillar <tmaillar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/23 15:00:25 by tmaillar          #+#    #+#             */
/*   Updated: 2024/06/14 07:12:51 by tmaillar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
#define HUMANA_HPP

#include <iostream>
#include <string>
#include "../include/Weapon.hpp"

class HumanA
{
    public:
        HumanA(std::string name, Weapon &Weapon);
        ~HumanA(); 
        void            attack(void) const; 


    private:
        std::string     _name;
        Weapon          &_Weapon;
};

#endif