/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmaillar <tmaillar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/23 09:26:14 by tmaillar          #+#    #+#             */
/*   Updated: 2024/06/14 06:35:51 by tmaillar         ###   ########.fr       */
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
        Zombie(void);
        Zombie(std::string name);
        ~Zombie(void);
        std::string     get_name();
        void            set_name(std::string &name);
        void            announce(void);

    private:
        std::string     _name;
};

Zombie* zombieHorde(int N, std::string name);



#endif
