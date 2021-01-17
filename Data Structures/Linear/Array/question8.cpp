//Question: https://www.geeksforgeeks.org/count-number-of-occurrences-or-frequency-in-a-sorted-array/
#include <bits/stdc++.h>
using namespace std;

int binary_search(int *arr, int left, int right, int x)
{
    if (left > right)
        return -1;
    int mid = (left + right) / 2;
    if (arr[mid] == x)
        return mid;
    else if (arr[mid] > x)
        return binary_search(arr, left, mid - 1, x);
    else
        return binary_search(arr, mid + 1, right, x);
}

int count_occurence(int *arr, int size, int x)
{
    int idx = binary_search(arr, 0, size - 1, x);
    if (idx == -1)
        return 0;

    int count = 1;
    int left = idx - 1;
    int right = idx + 1;
    while (left >= 0 && arr[left] == x)
    {
        count++;
        left--;
    }
    while (right < size && arr[right] == x)
    {
        count++;
        right++;
    }

    return count;
}
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
    int x;
    cin >> x;
    int count = count_occurence(arr, n, x);
    cout << count << endl;

    return 0;
}