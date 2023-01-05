/*
�������� ���������� ���������, ����������� �������� �� ������ ������� ��. �����.
���������� ���������� ��������������� ����������������� ����������� ���������.
*/
#include <iostream>
#include <string>
#include <regex>

// ���� ��������� � ���������
bool mail_check(std::string adres)
{
    return std::regex_match(adres, std::regex("^([\\w-]{1,})@[\\w+\\.\\w+]{1,}$"));
}

int main()
{
    std::string inp = "bab0n@vk.com";
    std::cout << "Enter your email:" << std::endl;
    std::cin >> inp;

    // ������������ ������� ������ � ����� ���������� �����
    while (!mail_check(inp))
    {
        std::cout << "The email you entered is invalid. Enter new:" << std::endl;
        std::cin >> inp;
    }
    std::cout << "We send mail to " << inp << "\nWait for" << std::endl;
    system("pause");
    return 0;
}