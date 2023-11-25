/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahajji <ahajji@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/25 09:14:06 by ahajji            #+#    #+#             */
/*   Updated: 2023/11/25 14:50:37 by ahajji           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

void    test()
{
    std::cout << "hiii\n";
}
int main(int ac, char **av)
{
    if(ac == 2)
    {
        Harl test;
        test.complain(av[1]);
    }
    else
        std::cout << "Error in arg" << std::endl;
    return 0;
}