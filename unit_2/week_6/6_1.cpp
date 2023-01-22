/*
Необходимо написать метод, который принимает на вход строку s и выводит пару двух элементов: Самый часто встречающийся символ и Количество его повторов
Примечание 1: Если несколько символов встречаются одинаковое количество раз, то вывести любую пару.
Примечание 2: Пробел и знаки препинания тоже считаются символами.
*/
#include <iostream>
#include <string>
#include <map>

std::pair<char, int> frequently(std::string str)
{
    int max = 0;
    char symb;
    for (int i = 0; i < str.length(); i++)
    {
        int count = 0;
        for (int j = 0; (j = str.find(str[i], j)) != std::string::npos; j++)
        {
            count++;
        }
        if (count >= max)
        {
            symb = str[i];
            max = count;
        }
    }
    return std::make_pair(symb, max);
}

int main()
{
    std::string inp = "aaa bbb cc gggggg fff ooo";
    std::cin >> inp;
    std::pair<char, int> res = frequently(inp);
    std::cout << res.first << " - " << res.second << std::endl;
    return 0;
}