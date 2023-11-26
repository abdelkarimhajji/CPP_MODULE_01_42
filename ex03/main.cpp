/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahajji <ahajji@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 15:34:02 by ahajji            #+#    #+#             */
/*   Updated: 2023/11/26 15:15:14 by ahajji           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include "HumanB.hpp"

int main( void )
{   
    // Weapon club = Weapon("crude spiked club");
    // HumanA bob("Bob", club);
    // bob.attack();
    // club.setType("some other type of club");
    // bob.attack();

    Weapon club = Weapon("sla7 nadi");
    HumanB jim("Jim");
    jim.setWeapon(&club);
    jim.attack();
    club.setType("some other type of club");
    jim.attack();

    return 0;
}