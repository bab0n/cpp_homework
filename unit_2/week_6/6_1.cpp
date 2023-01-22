/*
���������� �������� �����, ������� ��������� �� ���� ������ s � ������� ���� ���� ���������: ����� ����� ������������� ������ � ���������� ��� ��������
���������� 1: ���� ��������� �������� ����������� ���������� ���������� ���, �� ������� ����� ����.
���������� 2: ������ � ����� ���������� ���� ��������� ���������.
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