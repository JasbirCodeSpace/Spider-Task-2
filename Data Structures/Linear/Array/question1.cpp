// Question: https://www.geeksforgeeks.org/write-a-program-to-reverse-an-array-or-string/
#include <bits/stdc++.h>
using namespace std;

void reverse_array(int *arr, int size)
{

    int left = 0;
    int right = size - 1;
    while (left < right)
    {
        swap(arr[left], arr[right]);
        left++;
        right--;
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
    for (int i = 0; i < N; i++)
    {
        cin >> arr[i];
    }

    reverse_array(arr, N);
    print_array(arr, N);
    return 0;
}