/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahajji <ahajji@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 11:15:03 by ahajji            #+#    #+#             */
/*   Updated: 2023/11/22 15:20:46 by ahajji           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

class HumanB
{
    private:
        std::string name;
        Weapon  *weapon;
    public:
        HumanB(std::string name);
        void    setWeapon(Weapon *weapon);
        void    attack();
        
};