/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmaillar <tmaillar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/04 07:07:37 by tmaillar          #+#    #+#             */
/*   Updated: 2024/06/04 07:25:01 by tmaillar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Harl.hpp"

int main(int argc, char **argv)
{
    Harl karen;
    
    if (argc == 2)
        karen.complain(argv[1]);
    else
        std::cout << "Only one argv please" << std::endl;
    return (0);
}