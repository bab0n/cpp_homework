/*
Необходимо написать метод, который принимает на вход строку s и выводит пару двух элементов: Самый часто встречающийся символ и Количество его повторов
*/

#include <iostream>
#include <fstream>
#include <string>
#include <dirent.h>
#include <sys/types.h>
#include <regex>

int main()
{
    std::string inp = "C:\\Users\\bab0n\\Desktop\\volodin\\unit_2\\week_6\\";
    std::string toSearch = "6_2.cpp";
    std::cout << "Enter dir:\n>";
    std::cin >> inp;
    DIR *dir;
    struct dirent *entry;

    dir = opendir(inp.data());
    if (!dir)
    {
        perror("directory cannot be opened");
        exit(1);
    };

    while ((entry = readdir(dir)) != NULL)
    {
        std::string filename = entry->d_name;
        if (std::regex_match(filename, std::regex("\\w{0,}\\.{1}txt")))
        {
            std::string file = inp + filename;
            std::ifstream in(file);
            if (in.is_open())
            {
                std::string line;
                while (getline(in, line))
                {
                    size_t pos = line.find(toSearch);
                    if (pos != std::string::npos)
                    {
                        std::cout << "Match in " << filename << "\n";
                    }
                }
            }
            in.close();
        }
        if (entry->d_name == toSearch)
        {
            std::cout << "Matched -> " << filename << "\n";
        }
    }
    closedir(dir);
    return 0;
}