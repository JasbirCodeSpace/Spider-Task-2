//Question: https://www.geeksforgeeks.org/c-program-cyclically-rotate-array-one/
#include <bits/stdc++.h>
using namespace std;

void rotate_cyclic(int *arr, int size)
{
    int temp = arr[size - 1];
    for (int i = size - 1; i >= 0; i--)
    {
        arr[i] = arr[i - 1];
    }
    arr[0] = temp;
    return;
}

void print_array(int *arr, int size)
{

    cout << endl;
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
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
    rotate_cyclic(arr, n);
    print_array(arr, n);

    return 0;
}