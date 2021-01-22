//Question: https://practice.geeksforgeeks.org/problems/value-equal-to-index-value1330/1

class Solution{
public:

	vector<int> valueEqualToIndex(int arr[], int n) {
	    vector<int> result;
	    for(int i = 0;i<n;i++){
	        if(arr[i] == i+1){
	            result.push_back(arr[i]);
	        }
	    }
	    return result;
	}
};