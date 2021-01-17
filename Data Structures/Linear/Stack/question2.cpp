//Question: https://www.hackerearth.com/practice/data-structures/stacks/basics-of-stacks/practice-problems/algorithm/balanced-brackets-3-4fc590c6/

#include <bits/stdc++.h>
using namespace std;

string check(string str)
{
    stack<char> stk;
    for (int i = 0; i < str.size(); i++)
    {
        if (str[i] == '{' || str[i] == '[' || str[i] == '(')
        {
            stk.push(str[i]);
        }
        else
        {
            if (stk.empty())
            {
                return "NO";
            }
            else
            {
                if (str[i] == '}')
                {
                    if (stk.top() == '{')
                    {
                        stk.pop();
                    }
                    else
                    {
                        return "NO";
                    }
                }
                else if (str[i] == ']')
                {
                    if (stk.top() == '[')
                    {
                        stk.pop();
                    }
                    else
                    {
                        return "NO";
                    }
                }
                else if (str[i] == ')')
                {
                    if (stk.top() == '(')
                    {
                        stk.pop();
                    }
                    else
                    {
                        return "NO";
                    }
                }
            }
        }
    }
    if (!stk.empty())
        return "NO";
    return "YES";
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    while (n--)
    {
        string str;
        cin >> str;
        cout << check(str) << endl;
    }

    return 0;
}
