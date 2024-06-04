/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmaillar <tmaillar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/23 15:00:10 by tmaillar          #+#    #+#             */
/*   Updated: 2024/05/24 10:03:50 by tmaillar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/HumanA.hpp"
#include "../include/HumanB.hpp"
#include "../include/Weapon.hpp"
#include <string>
#include <iostream>

int main()
{
    Weapon club = Weapon("crude spiked club");
    HumanA bob("Bob", club);
    bob.attack();
    std::cout << std::endl;
    club.setType("some other type of club");
    bob.attack();
    std::cout << std::endl;
    club.setType("crude spiked club");
    HumanB jim("Jim");
    jim.setWeapon(club);
    jim.attack();
    std::cout << std::endl;
    club.setType("some other type of club");
    jim.attack();
    
    
    return (0);
}