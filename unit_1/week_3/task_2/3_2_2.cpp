/*
 Ќапишите регул€рное выражение, провер€ющее на правильность введенный адрес IPv6.
 –еализуйте приложение демонстрирующее работоспособность регул€рного выражени€.
 */

#include <iostream>
#include <string>
#include <regex>

bool ipv6_check(std::string ip)
{
    return std::regex_match(ip, std::regex("^(([\\w]{0,4})\\:){1,7}[\\w]{0,4}$"));
}

int main()
{
    std::string inp = "2001:0db8:85a3:0000:0000:8a2e:0370:7334";
    std::cout << "For stop software enter <-s>\n\n";
    while (true)
    {
        std::cout << "Enter ip to check:" << std::endl;
        std::cin >> inp;
        if (inp == "-s")
        {
            return 0;
        }
        std::string res = "invalid";
        if (ipv6_check(inp))
        {
            res = "correct";
        }
        system("cls");
        std::cout << "For stop software enter <-s>\n\n"
                  << inp << " is " << res << "\n"
                  << std::endl;
    }
    system("pause");
    return 0;
}