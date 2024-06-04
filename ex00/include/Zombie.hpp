/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmaillar <tmaillar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/23 07:57:22 by tmaillar          #+#    #+#             */
/*   Updated: 2024/05/23 08:43:17 by tmaillar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>
#include <string>


class Zombie
{
    public:
        Zombie(std::string name);
        ~Zombie();
        std::string get_name();
        void    announce(void);
    private:
        std::string _name;
};

Zombie* newZombie(std::string name);
void    randomChump(std::string name);

#endif