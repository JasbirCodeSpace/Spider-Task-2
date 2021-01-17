//Question: https://practice.geeksforgeeks.org/problems/sort-an-array-of-0s-1s-and-2s/0
#include <bits/stdc++.h>
using namespace std;

#define RANGE 3

void sort_array(int *arr, int size)
{
    int count[RANGE] = {0};
    for (size_t i = 0; i < size; i++)
    {
        count[arr[i]]++;
    }

    int j = 0;
    for (size_t i = 0; i < RANGE;)
    {

        if (count[i] > 0)
        {
            arr[j++] = i;
            count[i]--;
        }
        else
        {
            i++;
        }
    }
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

    int N;
    cin >> N;
    int arr[N];
    for (size_t i = 0; i < N; i++)
    {
        cin >> arr[i];
    }
    sort_array(arr, N);
    print_array(arr, N);

    return 0;
}