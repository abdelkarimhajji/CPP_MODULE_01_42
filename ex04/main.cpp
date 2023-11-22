/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahajji <ahajji@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 18:49:38 by ahajji            #+#    #+#             */
/*   Updated: 2023/11/22 19:28:15 by ahajji           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

void    writeInsideFolderRplace(std::string fileName, std::string s1, std::string s2)
{
    
}
int main(int ac, char **av)
{
    if (ac != 4)
        return 1;
    else
        writeInsideFolderRplace(av[1], av[2], av[3]);
    return 0;
}