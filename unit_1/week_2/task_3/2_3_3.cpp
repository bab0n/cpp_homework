#include <iostream>
#include "mergesort.h"

float get_median(int *array, int len)
{
    if (len % 2 == 0)
    {
        return (array[len / 2] + array[len / 2 - 1]) / 2.0;
    }
    else
    {
        return (array[len / 2]);
    }
}

int main()
{
    int num;
    std::cout << "Enter number elements for mass: ";
    std::cin >> num;
    int myarray[num];
    for (int i = 0; i < num; i++)
    {
        std::cout << "> ";
        std::cin >> myarray[i];
    }
    merge_sort(myarray, 0, num - 1);
    std::cout << get_median(myarray, num) << std::endl;

    system("pause");
    return 0;
}