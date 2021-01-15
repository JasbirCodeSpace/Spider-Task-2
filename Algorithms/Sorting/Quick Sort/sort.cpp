#include <bits/stdc++.h>
using namespace std;

void quick_sort(int *arr, int size);
void quick_sort(int *arr, int left, int right);
int partition(int *arr, int left, int right, int pivot);
int main()
{
    int size;
    cin >> size;

    int arr[size];
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    quick_sort(arr, size);

    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}

void quick_sort(int *arr, int size)
{
    quick_sort(arr, 0, size - 1);
}

void quick_sort(int *arr, int left, int right)
{
    if (left >= right)
        return;
    int pivot = arr[(left + right) / 2];
    int index = partition(arr, left, right, pivot);
    quick_sort(arr, left, index - 1);
    quick_sort(arr, index + 1, right);
}

int partition(int *arr, int left, int right, int pivot)
{
    while (left <= right)
    {
        while (arr[left] < pivot)
            left++;
        while (arr[right] > pivot)
            right--;
        if (left <= right)
        {
            swap(arr[left], arr[right]);
            left++;
            right--;
        }
    }

    return left;
}