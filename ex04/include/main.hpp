/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmaillar <tmaillar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/24 10:10:34 by tmaillar          #+#    #+#             */
/*   Updated: 2024/06/14 08:59:20 by tmaillar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MAIN_HPP
#define MAIN_HPP

#include <string>
#include <iostream>
#include <fstream>

int     main(int argc, char **argv);
void    manage_file(std::string file, std::string first, std::string second);
bool    check_file(std::ifstream& file_stream);
bool    check_outfile( std::ofstream& outfile_stream);

#endif