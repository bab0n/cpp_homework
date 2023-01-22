#include <iostream>
#include <string>
#include <vector>
#include <regex>
using namespace std;

int profit(vector<int> prices)
{
    int minPrice = 99999;
    int maxProfit = 0;
    for (int i = 0; i < prices.size(); i++)
    {
        if (prices[i] < minPrice)
        {
            minPrice = prices[i];
        }
        else if (prices[i] - minPrice > maxProfit)
        {
            maxProfit = prices[i] - minPrice;
        }
    }
    return maxProfit;
}

int main()
{
    string input = "7,6,4,3,1";
    vector<int> nums;
    cin >> input;
    regex r(R"([-+]?\d*\.?\d+(?:[eE][-+]?\d+)?)");
    for (sregex_iterator i = sregex_iterator(input.begin(), input.end(), r); i != sregex_iterator(); ++i)
    {
        smatch m = *i;
        nums.push_back(stoi(m.str()));
    }
    cout << profit(nums) << endl;
}