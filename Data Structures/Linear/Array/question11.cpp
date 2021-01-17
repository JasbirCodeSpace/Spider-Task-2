//Question: https://practice.geeksforgeeks.org/problems/kadanes-algorithm/0
#include <bits/stdc++.h>
using namespace std;

int solve(int *arr, int n)
{

    int max_sum = INT_MIN;
    int max_track = 0;
    for (int i = 0; i < n; i++)
    {
        max_track += arr[i];
        if (max_track > max_sum)
            max_sum = max_track;
        if (max_track < 0)
            max_track = 0;
    }

    return max_sum;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    int max_sum = solve(arr, n);
    cout << max_sum << endl;

    return 0;
}