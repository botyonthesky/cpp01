/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   file.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmaillar <tmaillar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/24 10:20:35 by tmaillar          #+#    #+#             */
/*   Updated: 2024/06/14 07:45:14 by tmaillar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/main.hpp"

void    manage_file(std::ifstream &file, std::string const first, std::string const second)
{
    // std::string line;
    // std::string outfile_name = file + ".replace";
    std::ofstream outfile(outfile_name.c_str());
    while (std::getline(file, line) != NULL)
    {
        size_t here = 0;
        while ((here = line.find(first, here)) != std::string::npos);
        {
            size_t l = first.size(); 
            line.erase(here, l);
            line.insert(here, second);
            here += second.length();
        }
        outfile << line << std::endl;
    }
}