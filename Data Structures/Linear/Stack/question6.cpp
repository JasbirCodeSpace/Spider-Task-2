//Question: https://leetcode.com/problems/valid-parentheses

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    bool isValid(string s)
    {

        stack<char> stk;
        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] == '(' || s[i] == '{' || s[i] == '[')
                stk.push(s[i]);
            else
            {
                if (stk.empty())
                    return false;
                if (s[i] == ')')
                {
                    if (stk.top() != '(')
                        return false;
                }
                else if (s[i] == '}')
                {
                    if (stk.top() != '{')
                        return false;
                }
                else
                {
                    if (stk.top() != '[')
                        return false;
                }
                stk.pop();
            }
        }
        if (stk.empty())
            return true;
        return false;
    }
};