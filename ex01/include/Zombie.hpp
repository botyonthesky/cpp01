/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmaillar <tmaillar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/23 09:26:14 by tmaillar          #+#    #+#             */
/*   Updated: 2024/05/23 14:37:18 by tmaillar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>
#include <string>
#include <vector>
#include <string>
#include <sstream>
#include <cctype>
#include <cstdlib>

class Zombie
{
    public:
        Zombie();
        ~Zombie();
        void            run();
        std::string     get_name();
        void            set_name(std::string &name);
        void            announce(void);
        static std::string     protec_getline(std::string str);
        
    private:
        std::string     _name;
};

Zombie* zombieHorde(int N, std::string name);
std::string     protec_getline(std::string str);
bool    check_str(std::string str);
int    check_input();


#endif
