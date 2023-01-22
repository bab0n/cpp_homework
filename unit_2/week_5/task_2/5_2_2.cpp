#include <iostream>
#include <map>
#include <string>

using namespace std;

map<string, map<string, int>> processPurchases()
{
    map<string, map<string, int>> customers;
    string customer, product;
    int quantity;
    while (cin >> customer >> product >> quantity)
    {
        customers[customer][product] += quantity;
    }
    return customers;
}

int main()
{
    map<string, map<string, int>> customers = processPurchases();
    for (auto customer : customers)
    {
        cout << endl;
        cout << customer.first << ":" << endl;
        for (auto product : customer.second)
        {
            cout << product.first << " " << product.second << endl;
        }
    }
    return 0;
}
