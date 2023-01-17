/*
Напишите программу, которая открывает и выводит на экран содержимое текстового файла.
При возникновении ошибок, выводите сообщения на экран в соответствии с возникшей ошибкой.
*/

#include <iostream>
#include <fstream>
#include <string>
#include <regex>

int main()
{
    std::string line;
    std::cout << "Enter file name:\n>";
    std::cin >> line;
    std::fstream in(line);
    if (!std::regex_match(line, std::regex("\\w{0,}\\.{1}txt")))
    {
        std::cout << "Non-text file" << std::endl;
        return 0;
    }
    if (in.is_open())
    {
        while (getline(in, line))
        {
            std::cout << line << std::endl;
        }
    }
    else
    {
        std::cout << "File is not exist" << std::endl;
    }
    in.close();
    return 0;
}