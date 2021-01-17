//Question: https://www.geeksforgeeks.org/check-if-a-key-is-present-in-every-segment-of-size-k-in-an-array/
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int x, k;
    cin >> x >> k;

    bool flag = false;
    for (int i = 0; i < n; i += k)
    {
        flag = true;
        int j = 0;
        for (; j < k; j++)
        {
            if (arr[j + i] == x)
            {
                break;
            }
        }
        if (j == k)
        {
            flag = false;
            break;
        }
    }

    if (flag)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;

    return 0;
}