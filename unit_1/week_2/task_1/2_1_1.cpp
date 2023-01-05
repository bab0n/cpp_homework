#include <iostream>

int main()
{
    int age;
    setlocale(0, "");
    std::cout << "Enter your age: ";
    std::cin >> age;

    if (10 >= age >= 20)
    {
        std::cout << age << " лет" << std::endl;
    }
    else
    {
        switch (age % 10)
        {
        case 1:
            std::cout << age << " год" << std::endl;
            break;
        case 2:
        case 3:
        case 4:
            std::cout << age << " года" << std::endl;
            break;
        default:
            std::cout << age << " лет" << std::endl;
            break;
        }
    }
    system("pause");
    return 0;
}