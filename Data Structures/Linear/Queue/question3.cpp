//Question: https://www.hackerearth.com/practice/data-structures/queues/basics-of-queues/practice-problems/algorithm/disk-tower-b7cc7a50/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    vector<int> arr;
    int x;
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        arr.push_back(x);
    }

    priority_queue<int> q;
    for (int i = 0; i < arr.size(); i++)
    {
        q.push(arr[i]);
        while (q.top() == n)
        {
            cout << q.top() << " ";
            q.pop();
            n--;
        }
        cout << endl;
    }

    return 0;
}