//Question: https://www.geeksforgeeks.org/building-heap-from-array/

#include<bits/stdc++.h>
using namespace std;

void min_heapify(int *arr, int n, int i){
    int minimum = i;
    int left = 2*i+1;
    int right = 2*i+2;
    if(left<n && arr[left]<arr[minimum])minimum = left;
    if(right<n && arr[right]<arr[minimum])minimum = right;

    if(minimum != i){
        swap(arr[minimum], arr[i]);
        min_heapify(arr, n, minimum);
    }
}
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

void build_heap(int *arr, int n){

    int idx = n/2-1;
    for (int i = idx; i >=0; i--)
    {
        max_heapify(arr, n, i);
    }
    
}