#include <iostream>

int main() {
    std::string username;
    std::cout << "Enter your nickname: ";
    std::cin >> username;
    setlocale(0, "");
    std::cout << "������, " << username << "!" << std::endl;
    system("pause");
    return 0;
}
