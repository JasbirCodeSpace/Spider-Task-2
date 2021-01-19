//Question: https://www.hackerearth.com/practice/data-structures/queues/basics-of-queues/practice-problems/algorithm/monk-and-power-of-time-3a648bf0/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    queue<int> q1;
    queue<int> q2;
    int x;
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        q1.push(x);
    }
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        q2.push(x);
    }

    int count = 0;
    while (!q1.empty())
    {
        if (q1.front() == q2.front())
        {
            count++;
            q1.pop();
            q2.pop();
        }
        else
        {
            while (q1.front() != q2.front())
            {
                x = q1.front();
                q1.pop();
                q1.push(x);
                count++;
            }
            count++;
            q1.pop();
            q2.pop();
        }
    }

    cout << count << endl;

    return 0;
}