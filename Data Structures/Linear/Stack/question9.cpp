//Question: https://leetcode.com/problems/reverse-substrings-between-each-pair-of-parentheses
#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    string reverseParentheses(string s)
    {

        stack<char> stk;
        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] == ')')
            {
                string str = "";
                while (stk.top() != '(')
                {
                    str += stk.top();
                    stk.pop();
                }
                stk.pop();
                for (int j = 0; j < str.length(); j++)
                    stk.push(str[j]);
            }
            else
            {
                stk.push(s[i]);
            }
        }

        string res = "";
        while (!stk.empty())
        {
            res = stk.top() + res;
            stk.pop();
        }

        return res;
    }
};