/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahajji <ahajji@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/19 16:52:20 by ahajji            #+#    #+#             */
/*   Updated: 2023/11/20 11:39:51 by ahajji           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie()
{
    this->name = "anonyme";
};

Zombie::Zombie(std::string name)
{
    this->name = name;
};

Zombie* Zombie::zombieHorde( int N, std::string name )
{
    Zombie  *arryZombie = new Zombie[N];
    
    for(int i = 0; i < N; i++)
    {
        arryZombie[i].name = name;
    }
    return arryZombie;
}

void Zombie::announce( void )
{
    std::cout << this->name << ": BraiiiiiiinnnzzzZ..." <<std::endl;
}