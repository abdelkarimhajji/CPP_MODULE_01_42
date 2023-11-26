/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahajji <ahajji@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 18:49:38 by ahajji            #+#    #+#             */
/*   Updated: 2023/11/26 15:54:30 by ahajji           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>


void    writeInsideFolderRplace(std::string fileName, std::string s1, std::string s2)
{
    std::string line;
    std::string str;
     std::string str2;
    size_t pos;
    unsigned int count = 0;
    unsigned int i = 0;
    
    std::ifstream Myfile(fileName);
    if(Myfile.is_open())
    {
        std::ofstream Myfile2(fileName + ".replace");
        while (getline(Myfile, line))
        {
            str += line;
            if(!Myfile.eof())
                str += '\n';
        }
        str2 = str;
        while (i < str2.length())
        {
            pos = str2.find(s1);
            if(pos <= str2.length())
            {
                str2.erase(pos, s1.length());
                count++;
            }
            i++;
        }
        i = 0;
        while (i < count)
        {
            pos = str.find(s1);
            if(pos <= str.length())
            {
                str.erase(pos, s1.length());
                str.insert(pos, s2);
            }
            i += s2.length() + 1;
        }
        Myfile2 << str;
        Myfile2.close();
        Myfile.close();
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
