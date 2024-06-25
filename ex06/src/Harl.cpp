/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmaillar <tmaillar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/04 07:07:35 by tmaillar          #+#    #+#             */
/*   Updated: 2024/06/14 11:56:32 by tmaillar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Harl.hpp"

Harl::Harl()
{
    
}

Harl::~Harl()
{
    
}

void    Harl::debug()
{
    std::cout << "[ DEBUG ]" << std::endl;
    std::cout << "I love having extra bacon" << std::endl;
    std::cout << std::endl;
}

void    Harl::info()
{
    std::cout << "[ INFO ]" << std::endl;
    std::cout << "I cannot believe adding extra bacon costs more money." << std::endl;
    std::cout << std::endl;
}

void    Harl::warning()
{
    std::cout << "[ WARNING ]" << std::endl;
    std::cout << "I think I deserve to have some extra bacon for free" << std::endl;
    std::cout << std::endl;
}

void    Harl::error()
{
    std::cout << "[ ERROR ]" << std::endl;
    std::cout << "This is unacceptable ! I want to speak to the manager now." << std::endl;
    std::cout << std::endl;
}
void    Harl::complain(std::string level)
{
    int i = 0;
    std::string call[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
    void (Harl::*ptr[4])() = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
    while (i < 4)
    {
        if (level == call[i])
            break;
        i++;
    }
    switch (i)
    {
        case 0 :
            (this->*ptr[0])();
        case 1 :
            (this->*ptr[1])();
        case 2 :
            (this->*ptr[2])();
        case 3 :
            (this->*ptr[3])();
            break;
        default :
            std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
            break;
    }
}
