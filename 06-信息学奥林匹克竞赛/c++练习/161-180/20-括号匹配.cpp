#include <iostream>
#include <stack>
#include <string>
using namespace std;

bool isMatching(const string &expression)
{
    stack<char> brackets;

    for (char c : expression)
    {
        if (c == '(' || c == '[')
        {
            brackets.push(c);
        }
        else if (c == ')' || c == ']')
        {
            if (brackets.empty())
            {
                return false; // 括号不匹配
            }

            char top = brackets.top();
            brackets.pop();

            if ((c == ')' && top != '(') || (c == ']' && top != '['))
            {
                return false; // 括号不匹配
            }
        }
    }

    return brackets.empty(); // 所有括号都匹配
}

int main()
{
    string expression;
    cin >> expression;

    if (isMatching(expression))
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}
