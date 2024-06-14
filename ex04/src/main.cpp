/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmaillar <tmaillar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/24 10:10:03 by tmaillar          #+#    #+#             */
/*   Updated: 2024/06/14 07:44:52 by tmaillar         ###   ########.fr       */
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
        // std::string line;
        std::string file_name = argv[1];
        std::string first = argv[2];
        std::string second = argv[3];
        std::string outfile_name = file + ".replace";

        // std::ifstream file(file_name.c_str());
        // if (!file.is_open())
        // {
        //     std::cerr << "Error on opening file" << argv[1] << std::endl;
        //     return (1);
        // }
        manage_file(file_name, first, second);
        // file.close();      
    }
    return (0);
}