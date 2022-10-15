#include <iostream>
#include <limits>

int main(){
    int n;
    float max = std::numeric_limits<float>::min();
    std::cout << "Enter mass size: ";
    std::cin >> n;
    float mass[n];
    // заполнить массив и найти максимум
    for(int i=0; i<n;i++){
        std::cout << "> ";
        std::cin >> mass[i];
        if (mass[i] > max){
            max = mass[i];
        }
    }
    // подсчитать числа равные максимуму
    int count=0;
    for (int i=0; i<n;i++){
        if (mass[i] == max){
            count++;
        }
    }
    std::cout << count << std::endl;
    system("pause");
    return 0;
}