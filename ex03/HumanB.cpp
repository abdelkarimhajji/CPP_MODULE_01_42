/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahajji <ahajji@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 11:14:40 by ahajji            #+#    #+#             */
/*   Updated: 2023/11/26 15:12:19 by ahajji           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB()
{
    this->name = "defualt";
    this->weapon = NULL;
};

HumanB::HumanB(std::string name)
{
    this->name = name;
    this->weapon = NULL;
};

void    HumanB::setWeapon(Weapon *weapon)
{
    this->weapon = weapon;
}
void    HumanB::attack()
{
    std::cout << this->name << " attacks with their " << this->weapon->getType() << std::endl;
}