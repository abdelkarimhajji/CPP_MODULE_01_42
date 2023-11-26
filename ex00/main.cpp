/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahajji <ahajji@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/19 11:59:52 by ahajji            #+#    #+#             */
/*   Updated: 2023/11/26 14:35:54 by ahajji           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
    Zombie  *dynamicZombi = newZombie("jihad");
    dynamicZombi->announce();
    randomChump("karim");
    
    delete dynamicZombi;
    return (0);
}