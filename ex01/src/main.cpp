/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmaillar <tmaillar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/23 09:22:55 by tmaillar          #+#    #+#             */
/*   Updated: 2024/06/14 06:43:14 by tmaillar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Zombie.hpp"


int     main()
{
    Zombie *horde;
    
    horde = zombieHorde(5, "Horde");
    for(int i = 0; i < 5; i++)
        horde[i].announce();
        
    delete [] horde;
    return (0);
}


