https://www.geeksforgeeks.org/maximum-and-minimum-in-an-array/
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int N;
    cin >> N;
    int arr[N];
    for (size_t i = 0; i < N; i++)
    {
        cin >> arr[i];
    }

    int min = arr[0];
    int max = arr[0];
    for (size_t i = 1; i < N; i++)
    {
        if (arr[i] < min)
            min = arr[i];
        if (arr[i] > max)
            max = arr[i];
    }

    cout << min << " " << max;

    return 0;
}