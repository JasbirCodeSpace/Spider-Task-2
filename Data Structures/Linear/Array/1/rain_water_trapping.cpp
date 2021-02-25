//https://www.geeksforgeeks.org/trapping-rain-water/

#include<bits/stdc++.h>
using namespace std;

int approach1(int *arr, int n){
    int left[n], right[n];
    left[0] = arr[0];
    right[n-1] = arr[n-1];
    for (int i = 1; i < n; i++)
    {
        left[i] = max(arr[i], left[i-1]);
    }
    for (int i = n-2; i >= 0; i--)
    {
        right[i] = max(arr[i], right[i+1]);
    }

    int res = 0;
    for (int i = 1; i < n; i++)
    {
        res += min(left[i], right[i]) - arr[i];
    }
    return res;  
}

int approach2(int *arr, int n){

    int left = 0, right = n-1;
    int left_max = 0, right_max = 0, result=0;

    while(left<=right){
        if(arr[left]<arr[right]){
            if(arr[left]>left_max)left_max = arr[left];
            else result += left_max - arr[left];
            left++;
        }else{
            if(arr[right]>right_max)right_max = arr[right];
            else result += right_max - arr[right];
            right--;
        }
    }
    return result;
}
int main(){

    int n;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)cin>>arr[i];
    cout<<approach2(arr, n)<<"\n";
    return 0;
}