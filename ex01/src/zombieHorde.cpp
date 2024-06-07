/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmaillar <tmaillar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/23 09:22:59 by tmaillar          #+#    #+#             */
/*   Updated: 2024/06/07 11:54:56 by tmaillar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Zombie.hpp"

Zombie* zombieHorde(int N, std::string name)
{
    Zombie *z = NULL;
    try
    {
        z = new Zombie[N];
    }
    catch (const std::bad_alloc &error)
    {
        std::cerr << "Allocation failed : " << error.what() << std::endl;
        return (NULL);
    }
    for (int i = 0; i < N; i++)
    {
        z[i].set_name(name);
    }
    return (z);
}
