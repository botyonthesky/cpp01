/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmaillar <tmaillar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/24 13:28:49 by tmaillar          #+#    #+#             */
/*   Updated: 2024/06/14 10:22:18 by tmaillar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
#define HARL_HPP
#include <string>
#include <iostream>

class Harl
{
    public:
        Harl();
        ~Harl(); 
        void    complain(std::string level);
        
    private:
        void    debug(void);
        void    info(void);
        void    warning(void);
        void    error(void);
};

#endif