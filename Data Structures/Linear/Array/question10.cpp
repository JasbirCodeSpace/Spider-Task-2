//Question: https://www.geeksforgeeks.org/find-the-missing-number/
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

    int sum = (n + 1) * (n + 2) / 2;
    for (int i = 0; i < n; i++)
    {
        sum -= arr[i];
    }
    cout << sum << endl;

    return 0;
}