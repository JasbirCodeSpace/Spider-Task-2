//Question: https://practice.geeksforgeeks.org/problems/reverse-a-string-using-stack/1

#include <bits/stdc++.h>
using namespace std;
char *reverse(char *str, int len);
int main()
{
    long long int t;
    cin >> t;
    while (t--)
    {
        char str[10000];
        cin >> str;
        long long int len = strlen(str);
        char *ch = reverse(str, len);
        cout << ch;
        cout << endl;
    }
    return 0;
}

char *reverse(char *S, int len)
{
    stack<char> stk;
    char *str = new char[len];
    for (int i = 0; i < len; i++)
        stk.push(S[i]);
    int i = 0;
    while (!stk.empty())
    {
        str[i++] = stk.top();
        stk.pop();
    }
    str[i] = '\0';
    return str;
}