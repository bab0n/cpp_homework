#include <iostream>
#include <stack>

using namespace std;

bool isValid(string line)
{
    stack<char> str;
    for (char symb : line)
    {
        if (symb == '(' || symb == '{' || symb == '[')
        {
            str.push(symb);
        }
        else
        {
            if (str.empty())
            {
                return false;
            }
            char top = str.top();
            str.pop();
            if ((symb == ')' && top != '(') || (symb == '}' && top != '{') || (symb == ']' && top != '['))
            {
                return false;
            }
        }
    }
    return str.empty();
}

int main()
{
    string input = "([])({})";
    // cin >> input;
    if (isValid(input))
    {
        cout << "Correct" << endl;
    }
    else
    {
        cout << "Invalid" << endl;
    }
    return 0;
}
