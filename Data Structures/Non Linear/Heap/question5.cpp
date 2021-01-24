//Question: https://www.geeksforgeeks.org/kth-smallestlargest-element-unsorted-array/

#include<bits/stdc++.h>
using namespace std;

void max_heapify(int *arr, int n, int i){
    int largest = i;
    int left = 2*i+1;
    int right = 2*i+2;
    if(left<n && arr[left]>arr[largest])largest = left;
    if(right<n && arr[right]>arr[largest])largest = right;

    if(i!=largest){
        swap(arr[i], arr[largest]);
        max_heapify(arr, n, largest);
    }
}

void min_heapify(int *arr, int n, int i){
    int minimum = i;
    int left = 2*i+1;
    int right = 2*i+2;
    if(left<n && arr[left]<arr[minimum])minimum = left;
    if(right<n && arr[right]<arr[minimum])minimum = right;

    if(i!=minimum){
        swap(arr[i], arr[minimum]);
        max_heapify(arr, n, minimum);
    }
}

int kth_maximum(int *arr, int n, int k){

    for (int i = n/2-1;i>=0; i--)
    {
        max_heapify(arr, n, i);
    }

    for (int i = n-1; i >= n - k; i--)
    {
        swap(arr[0], arr[i]);
        max_heapify(arr, i, 0);
    }
    return arr[n-k];
    
    
}

int kth_minimum(int *arr, int n, int k){

    for(int i=n/2-1;i>=0;i--)
        min_heapify(arr, n, i);
    for(int i=n-1;i>=n-k;i--){
        swap(arr[0], arr[i]);
        min_heapify(arr, i, 0);
    }

    return arr[n-k];
}