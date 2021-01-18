//Question: https://leetcode.com/problems/minimum-remove-to-make-valid-parentheses
#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    string minRemoveToMakeValid(string s)
    {

        stack<int> brac;
        vector<bool> vist(s.length(), 1);
        string res = "";
        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] == '(')
            {
                brac.push(i);
            }
            else if (s[i] == ')')
            {
                if (!brac.empty())
                    brac.pop();
                else
                    vist[i] = 0;
            }
        }

        while (!brac.empty())
        {
            vist[brac.top()] = 0;
            brac.pop();
        }

        for (int i = 0; i < s.length(); i++)
        {
            if (vist[i])
                res += s[i];
        }

        return res;
    }
};