/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahajji <ahajji@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 18:49:38 by ahajji            #+#    #+#             */
/*   Updated: 2023/11/24 10:53:56 by ahajji           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>

void    writeInsideFolderRplace(std::string fileName, std::string s1, std::string s2)
{
    std::string line;
    std::string str;
    std::ifstream Myfile(fileName);
    size_t pos;
    size_t len;
    if(Myfile.is_open())
    {
        std::ofstream Myfile2("karim");
        while (getline(Myfile, line))
        {
            str += line;
            if(!Myfile.eof())
                str += '\n';
        }
        int i = 0;
        while (i < str.length())
        {
            pos = str.find(s1);
            if(pos <= str.length())
            {
                str.erase(pos, s1.length());
                str.insert(pos, s2);
            }
            i++;
        }
            Myfile2 << str;
        
    }
}
int main(int ac, char **av)
{
    if (ac != 4)
        return 1;
    else
        writeInsideFolderRplace(av[1], av[2], av[3]);
    return 0;
}