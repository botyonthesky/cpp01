/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmaillar <tmaillar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/24 10:10:03 by tmaillar          #+#    #+#             */
/*   Updated: 2024/05/24 13:11:34 by tmaillar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/main.hpp"

#include <string>
#include <iostream>
#include <fstream>

int main(int argc, char **argv)
{
    if (argc != 4)
    {
        std::cout << "Usage : <filename>, <string_s1, string_s2>"
        << std::endl;
    }
    else
    {
        std::ifstream file(argv[1]);
        if (!file.is_open())
        {
            std::cerr << "Error on opening file" << argv[1] << std::endl;
            return (1);
        }
        manage_file(argv, file);
        file.close();      
    }
    return (0);
}