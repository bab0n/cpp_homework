/*
�������� ���������� ���������, ������� �� �������� �������, ������������� ����� ��� ���, � �������� �� �� ����.
���������� ���������� ��������������� ����������������� ����������� ���������.
 */

#include <iostream>
#include <string>
#include <regex>
#include <Windows.h>
// 8, 12, 13 ������ ����� ������� ����� ��������� ������� �������
int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    setlocale(0, "");
    std::string inp = "�����������������";
    std::cin >> inp;
    std::regex reg("(.)\\1{2,}");
    std::cout << std::regex_replace(inp, reg, "$1") << std::endl;
    system("pause");
    return 0;
}