//Question: https://www.hackerrank.com/challenges/queue-using-two-stacks/problem

#include <bits/stdc++.h>
using namespace std;

struct Queue
{
    stack<int> s1, s2;
    void enqueue(int data)
    {
        s1.push(data);
        return;
    }

    void dequeue()
    {
        if (s2.empty())
        {
            while (!s1.empty())
            {
                s2.push(s1.top());
                s1.pop();
            }
        }

        s2.pop();
        return;
    }

    int top()
    {
        if (s2.empty())
        {
            while (!s1.empty())
            {
                s2.push(s1.top());
                s1.pop();
            }
        }

        return s2.top();
    }
};

int main()
{
    int q;
    cin >> q;

    Queue que;
    while (q--)
    {
        int t;
        cin >> t;
        if (t == 1)
        {
            int x;
            cin >> x;
            que.enqueue(x);
        }
        else if (t == 2)
        {
            que.dequeue();
        }
        else if (t == 3)
        {
            cout << que.top() << endl;
        }
    }

    return 0;
}