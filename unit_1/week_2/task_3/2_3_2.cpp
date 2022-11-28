#include <iostream>
#include "mergesort.h"

int main()
{
    int num;
    std::cout << "Enter number of elements to be sorted: ";
    std::cin >> num;
    int myarray[num];
    for (int i = 0; i < num; i++) { 
        std:: cout<<"> ";
        std::cin >> myarray[i];
    }
    merge_sort(myarray, 0, num-1);
    std::cout << "Sorted array\n";
    for (int i = 0; i < num; i++){
        std::cout<<myarray[i]<<" ";
    }

    std::cout << std::endl;
    system("pause");
    return 0;
}