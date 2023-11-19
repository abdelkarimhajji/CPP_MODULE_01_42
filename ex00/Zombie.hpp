/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahajji <ahajji@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/19 12:01:11 by ahajji            #+#    #+#             */
/*   Updated: 2023/11/19 15:39:02 by ahajji           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class Zombie
{
    private:
        std::string name;
    public:
        Zombie( void );
        Zombie(std::string name);
        void announce( void );
        Zombie* newZombie( std::string name );
        void randomChump( std::string name );
};