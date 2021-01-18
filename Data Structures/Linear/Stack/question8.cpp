//Question: https://leetcode.com/problems/minimum-add-to-make-parentheses-valid/

#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int minAddToMakeValid(string S)
    {
        stack<char> stk;
        int count = 0;
        for (int i = 0; i < S.length(); i++)
        {
            if (S[i] == '(')
            {
                stk.push(S[i]);
            }
            else
            {
                if (stk.empty())
                {
                    count++;
                }
                else
                {
                    if (stk.top() == '(')
                        stk.pop();
                    else
                        count++;
                }
            }
        }
        if (!stk.empty())
            count += stk.size();
        return count;
    }
};