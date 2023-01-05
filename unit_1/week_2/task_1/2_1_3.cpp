#include <iostream>

int main()
{
    int chose;
    setlocale(0, "");
    std::cout << "Введите номер дня недели\n1 - Понедельник\n...\n7 - Воскресенье\n> ";
    std::cin >> chose;

    if (chose != 7)
    {
        std::cout << "Нет" << std::endl;
        return 0;
    }
    std::cout << "Какая температура на улице?\n1 - Жарко\n2 - Тепло\n3 - Холодно\n> ";
    std::cin >> chose;
    if (chose != 2)
    {
        std::cout << "Нет" << std::endl;
        return 0;
    }
    std::cout << "Есть ли осадки?\n1 - Сегодня ясно\n2 - Облачно\n3 - Идёт дождь\n4 - Идёт снег\n5 - Дождь с градом\n> ";
    std::cin >> chose;
    if (chose != 1 || chose != 2)
    {
        std::cout << "Нет" << std::endl;
        return 0;
    }
    std::cout << "На улице ветренно?\n1 - Да\n2 - Нет\n>";
    std::cin >> chose;
    if (chose != 2)
    {
        std::cout << "Нет" << std::endl;
        return 0;
    }
    std::cout << "Уровень влажности?\n1 - Высокий\n2 - Низкий\n>";
    std::cin >> chose;
    if (chose == !2)
    {
        std::cout << "Нет" << std::endl;
        return 0;
    }
    std::cout << "Да" << std::endl;
    system("pause");
    return 0;
}