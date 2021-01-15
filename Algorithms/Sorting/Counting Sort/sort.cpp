#include <bits/stdc++.h>
using namespace std;

#define RANGE 1000

void counting_sort(int *arr, int size)
{
    int count[RANGE] = {0};
    int output[size] = {0};

    for (int i = 0; i < size; i++)
    {
        count[arr[i]]++;
    }
    for (int i = 1; i <= RANGE; i++)
    {
        count[i] += count[i - 1];
    }
    for (int i = size - 1; i >= 0; --i)
    {
        output[count[arr[i]] - 1] = arr[i];
        count[arr[i]]--;
    }

    for (int i = 0; i < size; i++)
        arr[i] = output[i];
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
    counting_sort(arr, size);
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}