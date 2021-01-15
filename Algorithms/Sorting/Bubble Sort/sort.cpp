#include <bits/stdc++.h>
using namespace std;

void bubble_sort(int *arr, int size)
{
    bool isSorted = false;
    int lastUnsorted = size - 1;
    while (!isSorted)
    {
        isSorted = true;
        for (int i = 0; i < lastUnsorted; i++)
        {
            if (arr[i] > arr[i + 1])
            {
                swap(arr[i], arr[i + 1]);
                isSorted = false;
            }
        }
        lastUnsorted--;
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
    bubble_sort(arr, size);
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}