/*
Напишите программу, которая представляет собой калькулятор перевода из одного типа данных в другой.
На вход пользователь подает сообщение и выбирает тип, в который хочет преобразовать сообщение.
На выходе пользователь должен получить преобразованное сообщение или информацию о невозможности сделать это с пояснением причины.
*/

#include <iostream>
#include <string>
#include <regex>

void toDouble(std::string str)
{
    double temp;
    try
    {
        temp = std::stod(str);
        std::cout << temp << std::endl;
    }
    catch (std::invalid_argument)
    {
        std::cout << "Impossible, non-numeric value is entered" << std::endl;
    }
}

void toInt(std::string str)
{
    int tempInt;
    try
    {
        tempInt = std::stoi(str);
        std::cout << tempInt << std::endl;
    }
    catch (std::invalid_argument)
    {
        std::cout << "Impossible, non-numeric value is entered" << std::endl;
    }
}

void toBool(std::string str)
{

    if (std::regex_match(str, std::regex("[0]{1,}")) || str == "false")
    {
        std::cout << "false" << std::endl;
    }
    else
    {
        std::cout << "true" << std::endl;
    }
}

void toFloat(std::string str)
{
    double temp;
    try
    {
        temp = std::stof(str);
        std::cout << temp << std::endl;
    }
    catch (std::invalid_argument)
    {
        std::cout << "Impossible, non-numeric value is entered" << std::endl;
    }
}

int main()
{
    std::string input = "1.546884125";
    int chose;
    std::cout << "Enter message:\n>";
    std::cin >> input;
    std::cout << "Select type of message to return\n1 - double\n2 - int\n3 - bool\n4 - float"
              << std::endl;
    switch (chose)
    {
    case 1:
        toDouble(input);
        break;
    case 2:
        toInt(input);
        break;
    case 3:
        toBool(input);
        break;
    case 4:
        toFloat(input);
        break;
    default:
        break;
    }
    toDouble(input);
    system("pause");
    return 0;
}
