/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmaillar <tmaillar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/23 09:22:55 by tmaillar          #+#    #+#             */
/*   Updated: 2024/06/14 11:45:29 by tmaillar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Zombie.hpp"


int     main()
{
    Zombie *horde;
    
    horde = zombieHorde(15, "Horde");
    for(int i = 0; i < 15; i++)
        horde[i].announce();
        
    delete [] horde;
    return (0);
}


