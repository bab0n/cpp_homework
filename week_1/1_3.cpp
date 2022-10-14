#include <iostream>
#include <cmath>

int main() {
    double V, a;
    std::cout << "Enter rib length: ";
    std::cin >> a;
    V = (5.0 / 12) * (3 + sqrt(5)) * (a * a * a);
    std::cout << "Value = " << V << std::endl;
    system("pause");
    return 0;
}
