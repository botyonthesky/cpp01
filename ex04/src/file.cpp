/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   file.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmaillar <tmaillar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/24 10:20:35 by tmaillar          #+#    #+#             */
/*   Updated: 2024/06/14 10:09:23 by tmaillar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/main.hpp"

bool    check_file(std::ifstream& file_stream, std::string file)
{
    if (!file_stream)
    {
        std::cerr << "Error on opening file : " << file << std::endl;
        return (false);
    }
    file_stream.seekg(0, std::ios::end);
    if (file_stream.tellg() == 0)
    {
        std::cout << "The file : " << file << " is empty !" << std::endl;
        return (false);    
    }
    file_stream.seekg(0, std::ios::beg);
    return (true);
}

bool    check_outfile(std::ofstream& outfile_stream, std::string outfile)
{
    if (!outfile_stream)
    {
        std::cerr << "Error on creating file : " << outfile << std::endl;
        return (false);
    }
    else
        return (true);
}

void    manage_file(std::string file, std::string first, std::string second)
{
    std::string line;
    std::ifstream file_stream(file.c_str());
    if (!check_file(file_stream, file))
        return ;
    std::string outfile = file + ".replace";
    std::ofstream outfile_stream(outfile.c_str());
    if (!check_outfile(outfile_stream, outfile))
        return ;
    while (std::getline(file_stream, line))
    {
        size_t here = 0;
        while ((here = line.find(first, here)) != std::string::npos)
        {
            size_t l = first.size(); 
            line.erase(here, l);
            line.insert(here, second);
            here += second.length();
        }
        outfile_stream << line << std::endl;
    }
    file_stream.close();
    return ;
}