#include <iostream>
#include <string>


int main(){
    setlocale(0, "");
    std::string str, substr;

    std::cout << "��� ����: ";
    getline(std::cin, substr);
    std::cout << "��� ����:" << std::endl;
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