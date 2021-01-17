//Question: https://www.hackerearth.com/practice/data-structures/stacks/basics-of-stacks/practice-problems/algorithm/i-hate-even-subarrays
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        string str;
        cin >> str;
        stack<char> stk;
        for (int i = 0; i < str.size(); i++)
        {
            if (stk.empty())
            {
                stk.push(str[i]);
            }
            else
            {
                char temp = stk.top();
                if (temp == str[i])
                {
                    stk.pop();
                }
                else
                {
                    stk.push(str[i]);
                }
            }
        }
        if (stk.empty())
        {
            cout << "KHALI" << endl;
        }
        else
        {
            string res = "";
            while (!stk.empty())
            {
                res = stk.top() + res;
                stk.pop();
            }
            cout << res << endl;
        }
    }

    return 0;
}