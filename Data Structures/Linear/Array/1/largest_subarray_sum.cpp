#include<bits/stdc++.h>
using namespace std;

int brute_force_approach(int *arr, int n);  //O(N^3)
int optimized_approach(int *arr, int n);    // O(N^2)
int kadanes_approach(int *arr, int n);      // O(N)

int main(){

    int n;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }

    int largest_sum = kadanes_approach(arr, n);
    cout<<"Largest subarray sum = "<<largest_sum<<endl;
    
    return 0;
}

int brute_force_approach(int *arr, int n){

    int largest_sum = 0, curr_sum=0;
    int left =0, right = 0;

    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            curr_sum = 0;
            for(int k=i;k<=j;k++){
                curr_sum += arr[k];
            }
            if(curr_sum>largest_sum){
                largest_sum = curr_sum;
                left = i;
                right = j;
            }
        }
        
    }
    cout<<"Subarray having largest sum: ";
    for (int i = left; i <= right; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    
    return largest_sum;
}

int optimized_approach(int *arr, int n){
    int *csum = new int[n];
    csum[0] = arr[0];
    for (int i = 1; i < n; i++)csum[i] = csum[i-1] + arr[i];

    int curr_sum = 0, largest_sum = 0;
    int left = -1, right = -1;

    for (int i = 1; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            curr_sum = csum[j] - csum[i-1];
            if(curr_sum > largest_sum){
                largest_sum = curr_sum;
                left = i;
                right = j;
            }
        }
        
    }
    
    cout<<"Subarray having largest sum: ";
    for (int i = left; i <= right; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    
    return largest_sum;
    
}

int kadanes_approach(int *arr, int n){
    int curr_sum = 0, maximum_sum = 0;

    for (int  i = 0; i < n; i++)
    {
        curr_sum += arr[i];
        if(curr_sum<0)curr_sum = 0;
        maximum_sum = max(curr_sum, maximum_sum);
    }

    return maximum_sum;
    
}