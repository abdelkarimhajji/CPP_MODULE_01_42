/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahajji <ahajji@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/25 11:13:06 by ahajji            #+#    #+#             */
/*   Updated: 2023/11/26 15:30:21 by ahajji           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

void    Harl::debug( void )
{
 std::cout << " \"DEBUG\" level: Debug messages contain contextual information. They are mostly\nused for problem diagnosis.\nExample: \"I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!\"\n";

}

void    Harl::info( void )
{
    std::cout << "\"INFO\" level: These messages contain extensive information. They are helpful for\ntracing program execution in a production environment.\nExample: \"I cannot believe adding extra bacon costs more money. You didn’t put\nenough bacon in my burger! If you did, I wouldn’t be asking for more!\"\n";
}

void    Harl::warning( void )
{
    std::cout << "\"WARNING\" level: Warning messages indicate a potential issue in the system. However, it can be handled or ignored.\nExample: \"I think I deserve to have some extra bacon for free. I’ve been coming for\nyears whereas you started working here since last month.\"\n";
}

void    Harl::error( void )
{
    std::cout << "\"ERROR\" level: These messages indicate an unrecoverable error has occurred.\nThis is usually a critical issue that requires manual intervention.\nExample: \"This is unacceptable! I want to speak to the manager now.\"\n";
}

void Harl::complain( std::string level )
{
    void(Harl::*ptr[])() = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
    std::string arry[] = {"debug", "info", "warning", "error"};
    int i = 0;
    while (i < 4)
    {
        if(level == arry[i])
        {
            (this->*ptr[i])();
            break;
        }
        i++;
    }
}
