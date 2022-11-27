#include <iostream>
#include <string>


int main(){
    setlocale(0, "");
    std::string str, substr;

    std::cout << "Что ищем: ";
    getline(std::cin, substr);
    std::cout << "Где ищем:" << std::endl;
    getline(std::cin, str, ' ');

    int count = 0;
    size_t pos = 0;
    while ((pos = str.find(substr, pos)) != std::string::npos){
        pos = str.find(substr, pos + 1);
        ++count;
    }

    std::cout << count << std::endl;
    system("pause");
    return 0;
}