//Question: https://www.geeksforgeeks.org/sliding-window-maximum-maximum-of-all-subarrays-of-size-k/

#include<bits/stdc++.h>
using namespace std;

void heapify(int *arr, int n, int i){
    int largest = i;
    int left = 2*i+1;
    int right = 2*i+2;
    if(left<n && arr[left]>arr[largest])largest = left;
    if(right<n && arr[right]>arr[largest])largest = right;

    if(i!=largest){
        swap(arr[i], arr[largest]);
        heapify(arr, n, largest);
    }
}

void build_heap(int *arr, int n){
    for(int i=n/2-1;i>=0;i--){
        heapify(arr, n, i);
    }
}

void print_max(int *arr, int n, int k){

    int i = 0;
    int j = k-1;
    int heap[k];
    for(int i=0;i<k;i++)heap[i] = arr[i];
    build_heap(heap, k);
    cout<<heap[0]<<" ";
    int last=arr[i];
    i++;
    j++;
    int next = arr[j];
    while(j<n){
        int idx = find(heap, heap+k, last) - heap;
        heap[idx] = arr[j];
        build_heap(heap, k);
        cout<<heap[0]<<" ";
        last = arr[i];
        i++;
        j++;
        next = arr[j];

    }

}