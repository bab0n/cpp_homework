#include <iostream>
#include <string>
#include <regex>
#include <set>
using namespace std;

int main()
{
    string input = "4 1 2 3 3 3 3 5 5 4 18";
    set<int> nums;
    // cin >> input;
    regex r(R"([-+]?\d*\.?\d+(?:[eE][-+]?\d+)?)");
    for (sregex_iterator i = sregex_iterator(input.begin(), input.end(), r); i != sregex_iterator(); ++i)
    {
        smatch m = *i;
        nums.insert(stoi(m.str()));
    }
    for (auto i : nums)
    {
        cout << i << " ";
    }
}