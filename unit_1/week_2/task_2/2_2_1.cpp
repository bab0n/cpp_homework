#include <iostream>

int main()
{
    int height;
    std::cout << "Pyramid height:  ";
    std::cin >> height;
    for (int i = height - 1; i >= 0; --i)
    {
        for (int j = 0; j < i; ++j)
        {
            std::cout << " ";
        }
        for (int k = 0; k < height - i; ++k)
        {
            std::cout << char(35);
        }
        std::cout << " ";
        for (int k = 0; k < height - i; ++k)
        {
            std::cout << char(35);
        }
        std::cout << std::endl;
    }
    system("pause");
    std::cout << std::endl
              << char(35) << std::endl;
    return 0;
}
