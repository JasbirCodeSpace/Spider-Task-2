//Question: https://practice.geeksforgeeks.org/problems/first-and-last-occurrences-of-x/0

#include <iostream>
using namespace std;

void binarySearch(int *arr, int n, int x){
  
  int l = 0, r = n -1;
  int idx = 0;
  while(l<=r){
      int mid = (l+r)/2;
      if(arr[mid] == x){
          idx = mid;
          break;
      }else if(x < arr[mid]){
          r = mid-1;
      }else{
          l = mid+1;
      }
  }
  if(l>r){
      cout<<-1<<endl;
      return;
  }
  int start = idx, end = idx;
  while(start>=0 && arr[start] == x)start--;
  while(end<n && arr[end] == x)end++;
  cout<<start+1<<" "<<end-1<<endl;
  return;
}
int main() {
	int t;
	cin>>t;
	while(t--){
	    
	    int n, x;
	    cin>>n>>x;
	    int arr[n];
	    for(int i=0;i<n;i++){
	        cin>>arr[i];
	    }
        binarySearch(arr, n, x);
	}
	return 0;
}