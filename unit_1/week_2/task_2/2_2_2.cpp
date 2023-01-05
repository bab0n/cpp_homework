#include <iostream>

float sqrt(float num)
{
    float acc = 0.0001;
    float y = 1.0;
    int iters = 0;
    while (abs(y - num) > acc)
    {
        y = (y + num / y) / 2;
        iters++;
        if (iters == 100)
        {
            break;
        }
    }
    return y;
}

int main()
{
    float a;
    std::cout << "Enter number: ";
    std::cin >> a;
    float sqr = sqrt(a);
    std::cout << sqr << std::endl;
    system("pause");
    return 0;
}