#include <iostream>

int print_simple_numbers(int limit)
{
    int *a = new int[limit + 1];
    for (int i = 0; i < limit + 1; i++)
    {
        a[i] = i;
    }
    for (int p = 2; p < limit + 1; p++)
    {
        if (a[p] != 0)
        {
            std::cout << a[p] << std::endl;
            for (int j = p * p; j < limit + 1; j += p)
            {
                a[j] = 0;
            }
        }
    }
}

int main()
{
    int n;
    std::cout << "Enter high limit: ";
    std::cin >> n;
    int res = print_simple_numbers(n);
    system("pause");
    return 0;
}