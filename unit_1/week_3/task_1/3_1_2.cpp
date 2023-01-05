#include <iostream>
#include <string>
#include <map>
#include <iomanip>
#include <cmath>

double get_entropy(std::string str)
{
    std::map<char, double> mymap;
    for (int i = 0; i < str.length(); i++)
    {
        double count = 0.0;
        for (int j = 0; (j = str.find(str[i], j)) != std::string::npos; j++)
        {
            count++;
        }
        mymap[str[i]] = count / str.length();
    }
    double entropy = 0;
    std::map<char, double>::iterator it;
    for (it = mymap.begin(); it != mymap.end(); ++it)
    {
        entropy -= it->second * log2(it->second);
    }
    return entropy;
}

int main()
{
    std::string str;
    getline(std::cin, str);
    std::cout << std::setprecision(3) << get_entropy(str) << std::endl;

    system("pause");
    return 0;
}