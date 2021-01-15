#include <bits/stdc++.h>
using namespace std;

void merge_sort(int *arr, int size);
void merge_sort(int *arr, int *temp, int leftStart, int rightEnd);
void merge_halves(int *arr, int *temp, int leftStart, int rightEnd);
void copy_array(int *a, int aBegin, int *b, int bBegin, int size);
int main()
{
    int size;
    cin >> size;
    int arr[size];
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    merge_sort(arr, size);
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}

void merge_sort(int *arr, int size)
{
    int temp[size] = {0};
    merge_sort(arr, temp, 0, size - 1);
}

void merge_sort(int *arr, int *temp, int leftStart, int rightEnd)
{
    if (leftStart >= rightEnd)
        return;
    int mid = (leftStart + rightEnd) / 2;
    merge_sort(arr, temp, leftStart, mid);
    merge_sort(arr, temp, mid + 1, rightEnd);
    merge_halves(arr, temp, leftStart, rightEnd);
}

void merge_halves(int *arr, int *temp, int leftStart, int rightEnd)
{
    int leftEnd = (leftStart + rightEnd) / 2;
    int rightStart = leftEnd + 1;
    int size = rightEnd - leftStart + 1;

    int left = leftStart;
    int right = rightStart;
    int index = left;

    while (left <= leftEnd && right <= rightEnd)
    {
        if (arr[left] <= arr[right])
        {
            temp[index++] = arr[left++];
        }
        else
        {
            temp[index++] = arr[right++];
        }
    }

    copy_array(arr, left, temp, index, leftEnd);
    copy_array(arr, right, temp, index, rightEnd);
    copy_array(temp, leftStart, arr, leftStart, rightEnd);
}

void copy_array(int *a, int aBegin, int *b, int bBegin, int size)
{
    for (int i = aBegin, j = bBegin; i <= size; i++, j++)
    {
        b[j] = a[i];
    }
}