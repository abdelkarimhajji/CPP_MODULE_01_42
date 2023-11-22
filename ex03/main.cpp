/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahajji <ahajji@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 15:34:02 by ahajji            #+#    #+#             */
/*   Updated: 2023/11/22 18:20:06 by ahajji           ###   ########.fr       */
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