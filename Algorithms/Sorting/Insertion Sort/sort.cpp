#include <bits/stdc++.h>
using namespace std;

void insertion_sort(int *arr, int size)
{
    int key, i, j;
    for (i = 1; i < size; i++)
    {
        key = arr[i];
        j = i;
        while (j >= 1 && arr[j - 1] > key)
        {
            arr[j] = arr[j - 1];
            j--;
        }
        arr[j] = key;
    }
}
int main()
{

    int size;
    cin >> size;
    int arr[size];
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    insertion_sort(arr, size);

    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}