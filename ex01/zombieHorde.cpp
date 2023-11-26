/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahajji <ahajji@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/26 14:46:47 by ahajji            #+#    #+#             */
/*   Updated: 2023/11/26 14:55:41 by ahajji           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name )
{
    Zombie  *arryZombie = new Zombie[N];
    
    for(int i = 0; i < N; i++)
    {
        arryZombie[i].setName(name);
    }
    return arryZombie;
}
