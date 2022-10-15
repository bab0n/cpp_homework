#include <iostream>

int main(){
    float a, acc = 0.0001;
    float y = 1;
    int iters = 0;
    std::cout << "Enter number: ";
    std::cin >> a;

    while (abs(y-a) > acc){
        y = (y+a/y)/2;
        iters++;
        if (iters == 100){
            break;
        }
    }
    std::cout << y << std::endl;
    system("pause");
    return 0;
}