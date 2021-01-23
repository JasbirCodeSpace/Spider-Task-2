//Question: https://practice.geeksforgeeks.org/problems/find-pair-given-difference

#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int size, n;
	    cin>>size>>n;
	    int arr[size];
	    for(int i=0;i<size;i++)cin>>arr[i];
	    sort(arr, arr+size);
	    
	    int i=0, j=1;
	    bool found = false;
	    while(i<size && j<size){
	        if(i!=j && arr[j]-arr[i]==n){
	            cout<<1<<endl;
	            found = true;
	            break;
	        }
	        else if(arr[j]-arr[i]<n)j++;
	        else i++;
	    }
	    if(!found)
	    cout<<-1<<endl;
	}
	return 0;
}