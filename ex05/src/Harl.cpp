/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmaillar <tmaillar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/24 13:28:43 by tmaillar          #+#    #+#             */
/*   Updated: 2024/06/04 07:09:07 by tmaillar         ###   ########.fr       */
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
    std::cout << "I love having extra bacon" << std::endl;
}

void    Harl::info()
{
    std::cout << "I cannot believe adding extra bacon costs more money." << std::endl;
}

void    Harl::warning()
{
    std::cout << "I think I deserve to have some extra bacon for free" << std::endl;
}

void    Harl::error()
{
    std::cout << "This is unacceptable ! I want to speak to the manager now." << std::endl;
}

void    Harl::complain(std::string level)
{
    int i = 0;
    std::string call[] = {"debug", "info", "warning", "error"};
    void (Harl::*ptr[])() = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};

    while (i < 4)
    {
        if (level == call[i])
            (this->*ptr[i])();
        i++;
    }
}