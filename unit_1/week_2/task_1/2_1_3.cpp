#include <iostream>

int main()
{
    int chose;
    setlocale(0, "");
    std::cout << "������� ����� ��� ������\n1 - �����������\n...\n7 - �����������\n> ";
    std::cin >> chose;

    if (chose != 7)
    {
        std::cout << "���" << std::endl;
        return 0;
    }
    std::cout << "����� ����������� �� �����?\n1 - �����\n2 - �����\n3 - �������\n> ";
    std::cin >> chose;
    if (chose != 2)
    {
        std::cout << "���" << std::endl;
        return 0;
    }
    std::cout << "���� �� ������?\n1 - ������� ����\n2 - �������\n3 - ��� �����\n4 - ��� ����\n5 - ����� � ������\n> ";
    std::cin >> chose;
    if (chose != 1 || chose != 2)
    {
        std::cout << "���" << std::endl;
        return 0;
    }
    std::cout << "�� ����� ��������?\n1 - ��\n2 - ���\n>";
    std::cin >> chose;
    if (chose != 2)
    {
        std::cout << "���" << std::endl;
        return 0;
    }
    std::cout << "������� ���������?\n1 - �������\n2 - ������\n>";
    std::cin >> chose;
    if (chose == !2)
    {
        std::cout << "���" << std::endl;
        return 0;
    }
    std::cout << "��" << std::endl;
    system("pause");
    return 0;
}