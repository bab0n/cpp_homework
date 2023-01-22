#include <iostream>
#include <string>
#include <list>
#include <vector>
#include <regex>
using namespace std;

vector<vector<int>> perms(vector<int> nums)
{
    vector<vector<int>> result;
    sort(nums.begin(), nums.end());
    do
    {
        result.push_back(nums);
    } while (next_permutation(nums.begin(), nums.end()));
    return result;
}

int main()
{
    string input = "1 2 3";
    vector<int> nums;
    cin >> input;
    regex r(R"([-+]?\d*\.?\d+(?:[eE][-+]?\d+)?)");
    for (sregex_iterator i = sregex_iterator(input.begin(), input.end(), r); i != sregex_iterator(); ++i)
    {
        smatch m = *i;
        nums.push_back(stoi(m.str()));
    }
    auto ps = perms(nums);
    for (auto i : ps)
    {
        for (auto j : i)
        {
            cout << j << " ";
        }
        cout << endl;
    }
    return 0;
}