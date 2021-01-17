//Question: https://www.hackerearth.com/practice/data-structures/stacks/basics-of-stacks/practice-problems/algorithm/fun-game-91510e9f/
#include <bits/stdc++.h>
using namespace std;

void output(int *A, int *B, int n)
{
    stack<int> a, b;
    for (int i = 0; i < n; i++)
    {
        a.push(A[i]);
    }
    for (int i = 0; i < n; i++)
    {
        b.push(B[i]);
    }

    while (!a.empty() && !b.empty())
    {
        if (a.top() > b.top())
        {
            cout << 1 << " ";
            b.pop();
        }
        else if (a.top() < b.top())
        {
            cout << 2 << " ";
            a.pop();
        }
        else
        {
            cout << 0 << " ";
            a.pop();
            b.pop();
        }
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    int A[n], B[n];
    for (int i = 0; i < n; i++)
    {
        int temp;
        cin >> temp;
        A[n - i - 1] = temp;
        B[i] = temp;
    }

    output(A, B, n);

    return 0;
}