/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   file.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmaillar <tmaillar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/24 10:20:35 by tmaillar          #+#    #+#             */
/*   Updated: 2024/05/24 13:10:42 by tmaillar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/main.hpp"

void    manage_file(char **argv, std::ifstream &file)
{
    std::string line;
    std::string first = argv[2];
    std::string second = argv[3];
    std::getline(file, line);
    while (std::getline(file, line))
    {
        size_t here = 0;
        here = line.find(first);
        if (here != std::string::npos)
        {
            size_t l = first.size(); 
            line.erase(here, l);
            line.insert(here, second);
            here += second.length();
        }
        std::cout << line << std::endl;
    }
}