/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahajji <ahajji@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/19 16:47:38 by ahajji            #+#    #+#             */
/*   Updated: 2023/11/20 14:04:24 by ahajji           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main( void )
{
    Zombie zombie;
    Zombie *arrZombie;
    
    
    arrZombie = zombie.zombieHorde(5, "hiii");
    zombie.announce();
    arrZombie[0].announce();
    return 0;
}
