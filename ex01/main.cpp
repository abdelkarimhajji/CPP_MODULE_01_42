/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahajji <ahajji@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/19 16:47:38 by ahajji            #+#    #+#             */
/*   Updated: 2023/11/26 15:02:55 by ahajji           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main( void )
{
    Zombie *arrZombie;
    int n = 5;
    int i = 0;
    
    arrZombie = zombieHorde(n, "hiii");
    while (i < n)
    {
        arrZombie[i].announce();
        i++;
    }
    delete[] arrZombie;
    return 0;
}
