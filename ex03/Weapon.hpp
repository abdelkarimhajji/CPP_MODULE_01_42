/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahajji <ahajji@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 15:34:54 by ahajji            #+#    #+#             */
/*   Updated: 2023/11/22 15:27:38 by ahajji           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
#define WEAPON_HPP
#include <iostream>

class Weapon
{
    private:
        std::string type;
    public:
        Weapon();
        Weapon(std::string type);
        const std::string   getType();
        void    setType(std::string type);
};
#endif // WEAPON_HPP