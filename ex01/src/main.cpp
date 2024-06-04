/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmaillar <tmaillar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/23 09:22:55 by tmaillar          #+#    #+#             */
/*   Updated: 2024/05/23 14:05:30 by tmaillar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Zombie.hpp"

std::string     protec_getline(std::string str)
{
    if (!std::getline(std::cin >> std::ws, str))
    {
        std::cerr << "Input error ^D" << std::endl;
        exit (EXIT_FAILURE);
    }
    else
        return (str);
}

bool    check_str(std::string str)
{
    for (size_t i = 0; i < str.size(); i++)
    {
        if (isdigit(str[i]) == false)
        {
            std::cout << "You can only enter digit.." << std::endl;
            return (false);
        }
    }
    return (true);    
}

int    check_input_nb()
{
    std::string str;
    int result = 0;
    bool valid = false;
    do
    {
        std::cout << "How many Zombie do you want to create ?" << std::endl;;
        std::cout << "Please enter a number : ";
        str = protec_getline(str);
        if (check_str(str))
        {
            result = std::atoi(str.c_str());
            if (result < 2)
                std::cout << "You must at least create two Zombies, this is a horde!" << std::endl;
            else
                valid = true;
        }   
    }
    while (!valid);
    return (result);
}


int     main()
{
    int nb;
    nb = check_input_nb();
    Zombie *horde;
    horde = zombieHorde(nb, name);
    for(int i = 0; i < nb; i++)
        horde[i].announce();
    delete [] horde;
    return (0);
}


