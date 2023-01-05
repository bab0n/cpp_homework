#include <iostream>
#include <limits>

int main()
{
    int n;
    float max = std::numeric_limits<float>::min();
    std::cout << "Enter mass size: ";
    std::cin >> n;
    float mass[n];
    int count = 1;
    for (int i = 0; i < n; i++)
    {
        std::cout << "> ";
        std::cin >> mass[i];
        if (mass[i] > max)
        {
            max = mass[i];
            count = 1;
        }
        else
        {
            if (mass[i] == max)
            {
                count++;
            }
        }
    }
    std::cout << count << std::endl;
    system("pause");
    return 0;
}