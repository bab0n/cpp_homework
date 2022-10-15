#include <iostream>
#include "mergesort.h"

int main(){
    int num;
    std::cout << "Enter number of elements to be sorted: ";
    std::cin >> num;
    int myarray[num];
    for (int i = 0; i < num; i++) { 
        std:: cout<<"> ";
        std::cin >> myarray[i];
    }
    merge_sort(myarray, 0, num-1);
    
    if (num%2 == 0){
        std::cout << (myarray[num / 2] + myarray[num / 2 - 1]) / 2 << std::endl;
    }else{
        std::cout << myarray[num/2] << std::endl;
    }

    system("pause");
    return 0;
}