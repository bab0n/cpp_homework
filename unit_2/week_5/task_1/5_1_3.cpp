#include <iostream>
#include <vector>
#include <regex>
#include <vector>
using namespace std;

int maxWater(vector<int> heights)
{
    int left = 0, right = heights.size() - 1;
    int maxWater = 0;
    while (left < right)
    {
        int width = right - left;
        int height = min(heights[left], heights[right]);
        maxWater = max(maxWater, width * height);
        if (heights[left] < heights[right])
        {
            left++;
        }
        else
        {
            right--;
        }
    }
    return maxWater;
}

int main()
{
    int n;
    vector<int> heights;
    string input = "4,3,2,1,4";
    cin >> input;
    regex r(R"([-+]?\d*\.?\d+(?:[eE][-+]?\d+)?)");
    for (sregex_iterator i = sregex_iterator(input.begin(), input.end(), r); i != sregex_iterator(); ++i)
    {
        smatch m = *i;
        heights.push_back(stoi(m.str()));
    }
    cout << maxWater(heights) << endl;
    return 0;
}
