#include <iostream>

int main(){
    int val;
    std::cout << "Enter number of elements to be sorted: ";
    std::cin >> num;
    int myarray[num];
    for (int i = 0; i < num; i++) { 
        std:: cout<<"> ";
        std::cin >> myarray[i];
    }

    system("pause");
    return 0;
}