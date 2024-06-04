/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmaillar <tmaillar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/23 07:57:09 by tmaillar          #+#    #+#             */
/*   Updated: 2024/05/23 09:12:40 by tmaillar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Zombie.hpp"

int main()
{
    Zombie *z1 = newZombie("Heap Zork");
    Zombie *z2 = newZombie("Heap Grotus");
    std::cout << std::endl;
    z1->announce();
    z2->announce();
    std::cout << std::endl;
    randomChump("Stack Zork");
    std::cout << std::endl;
    randomChump("Stack Grotus");
    std::cout << std::endl;
    delete (z1);
    delete (z2);
    return (0);
}