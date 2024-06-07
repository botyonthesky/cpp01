/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmaillar <tmaillar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/23 08:24:40 by tmaillar          #+#    #+#             */
/*   Updated: 2024/06/07 11:44:01 by tmaillar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Zombie.hpp"

Zombie* newZombie(std::string name)
{
    try
    {
        Zombie* nZombie = new Zombie(name);
        return (nZombie);
    }
    catch (const std::bad_alloc &error)
    {
        std::cerr << "Allocation failed : " << error.what() << std::endl;
        return (NULL);
    }    
}