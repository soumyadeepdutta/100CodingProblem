#include <iostream>
#include <stack>
#include <string>

bool isMatched(char begin, char end)
{
    return (begin == '(' && end == ')') ||
           (begin == '{' && end == '}') ||
           (begin == '[' && end == ']');
}

bool isBalanced(std::string s)
{
    std::stack<char> stck;
    for (char c : s)
    {
        switch (c)
        {
        case '(':
        case '{':
        case '[':
            stck.push(c);
            break;
        case ']':
        case '}':
        case ')':
            if (stck.empty() || !isMatched(stck.top(), c))
            {
                return false;
            }
            stck.pop();
            break;
        }
    }
    return stck.empty();
}

int main()
{
    std::string s = "{[]}()[]";
    // 1st implementation
    std::stack<char> stck;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == '{' || s[i] == '(' || s[i] == '[')
        {
            stck.push(s[i]);
        }
        else
        {
            if (stck.top() == '[' && s[i] != ']' || stck.top() == '{' && s[i] != '}' || stck.top() == '(' && s[i] != ')')
            {
                std::cout << "Flase";
                return 0;
            }
            else if (stck.empty())
            {
                std::cout << "Flase";
                return 0;
            }
            stck.pop();
        }
    }
    if (stck.empty())
    {
        std::cout << "True";
    }
    else
    {
        std::cout << "False";
    }

    // second implementation
    bool isMatch = isBalanced(s);
    std::cout << isMatch;
    return 0;
}