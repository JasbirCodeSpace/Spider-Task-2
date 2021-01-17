// Question: https://practice.geeksforgeeks.org/problems/kth-smallest-element5635/1
#include <bits/stdc++.h>
using namespace std;

void min_heapify(int *arr, int n, int i)
{
    int l = 2 * i + 1;
    int r = 2 * i + 2;
    int smallest = i;
    if (l < n && arr[l] < arr[smallest])
        smallest = l;
    if (r < n && arr[r] < arr[smallest])
        smallest = r;
    if (i != smallest)
    {
        swap(arr[i], arr[smallest]);
        min_heapify(arr, n, smallest);
    }
}

int kth_min(int *arr, int n, int k)
{
    for (int i = n / 2 - 1; i >= 0; i--)
    {
        min_heapify(arr, n, i);
    }

    int val = 0;
    for (int i = n - 1; i >= n - k; i--)
    {
        swap(arr[i], arr[0]);
        val = arr[i];
        min_heapify(arr, i, 0);
    }

    return val;
}
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
    int K = 0;
    cin >> K;

    int k_min = kth_min(arr, N, K);
    cout << k_min << endl;

    return 0;
}