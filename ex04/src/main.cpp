/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmaillar <tmaillar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/24 10:10:03 by tmaillar          #+#    #+#             */
/*   Updated: 2024/06/14 10:23:57 by tmaillar         ###   ########.fr       */
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
        std::cout << "Usage : <filename>, <string_s1>, <string_s2>"
        << std::endl;
    }
    else
    {
        std::string file_name = argv[1];
        std::string first = argv[2];
        std::string second = argv[3];
        manage_file(file_name, first, second);
    }
    return (0);
}