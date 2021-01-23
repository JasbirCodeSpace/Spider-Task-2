//Question: https://www.hackerrank.com/challenges/correctness-invariant/problem

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

void insertion_sort(int *arr, int size){
    int i,j,key;
    for(i=1;i<size;i++){
        j=i-1;
        key = arr[i];
        while(j>=0 && arr[j]>key){
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = key;
    }
}
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int size;
    cin>>size;
    int arr[size];
    for(int i=0;i<size;i++)cin>>arr[i];
    insertion_sort(arr, size); 
    for(int i =0;i<size;i++)cout<<arr[i]<<" ";
    return 0;
}
