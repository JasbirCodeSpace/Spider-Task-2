//Question: https://practice.geeksforgeeks.org/problems/union-of-two-arrays/0
#include <bits/stdc++.h>
using namespace std;

void intersection_array(int *a, int n, int *b, int m)
{
    int i = 0, j = 0;
    while (i < n && j < m)
    {
        if (a[i] < b[j])
        {
            i++;
        }
        else if (a[i] > b[j])
        {
            j++;
        }
        else
        {
            cout << a[i++] << " ";
            j++;
        }
    }

    cout << endl;
    return;
}

void union_array(int *a, int n, int *b, int m)
{
    int i = 0, j = 0;
    while (i < n && j < m)
    {
        if (a[i] < b[j])
        {
            cout << a[i++] << " ";
        }
        else if (a[i] > b[j])
        {
            cout << b[j++] << " ";
        }
        else
        {
            cout << a[i++] << " ";
            j++;
        }
    }

    while (i < n)
        cout << a[i++] << " ";
    while (j < m)
        cout << b[j++] << " ";
    cout << endl;
    return;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    int a[n];
    for (size_t i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    int m;
    cin >> m;
    int b[m];
    for (size_t i = 0; i < m; i++)
    {
        cin >> b[i];
    }

    union_array(a, n, b, m);
    intersection_array(a, n, b, m);
    return 0;
}