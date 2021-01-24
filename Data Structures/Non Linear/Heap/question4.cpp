//Question: https://practice.geeksforgeeks.org/problems/k-largest-elements4206/1

#include<bits/stdc++.h>
using namespace std;

class Solution{
public:	
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
    
    vector<int> build_heap(int *arr, int n, int k){
        vector<int> kmax;
        for(int i=n/2-1;i>=0;i--)
            heapify(arr, n, i);
        for(int i=n-1;i>=n-k;i--){
            kmax.push_back(arr[0]);
            swap(arr[0], arr[i]);
            heapify(arr, i, 0);
        }
        return kmax;
    }
	vector<int> kLargest(int arr[], int n, int k) {
	   vector<int> result = build_heap(arr, n, k);
	   return result;
	}

};