/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahajji <ahajji@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 15:34:52 by ahajji            #+#    #+#             */
/*   Updated: 2023/11/21 11:02:31 by ahajji           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon()
{
    this->type = "c1";
};

const std::string   Weapon::getType()
{
    return this->type;
}

void    Weapon::setType(std::string type)
{
    this->type = type;
}