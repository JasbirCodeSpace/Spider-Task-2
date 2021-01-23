//Question: https://practice.geeksforgeeks.org/problems/find-missing-and-repeating2512/1

// using sum of natural and sum of squares equations
class Solution{
public:
    int* findTwoElement(int *arr, int n) {
    long long int Sum_N = (n * (n+1) ) /2, Sum_NSq = (n * (n +1) *(2*n +1) )/6;
    long long int miss=0, rep=0;
     
    for(int i=0;i<n; i++){
       Sum_N -= (long long int)arr[i];
       Sum_NSq -= (long long int)arr[i]*(long long int)arr[i];
    }
     
    miss = (Sum_N + Sum_NSq/Sum_N)/2;
    rep= miss - Sum_N;
    int *res = new int[2]{rep, miss};
    return res;
        
        
    }
};

//using map
class Solution{
public:
    int* findTwoElement(int *arr, int n) {
    int rep = 0, miss = 0;
    unordered_map<int, bool> check;
    for(int i=0;i<n;i++){
        if(check.find(arr[i]) == check.end()){
            check[arr[i]] = true;
            
        }
        else{
            rep = arr[i];
        }
    }
    for(int i=1;i<=n;i++){
        if(check.find(i) == check.end()){
            miss = i;
            break;
        }
    }
    
    int *ans = new int[2]{rep, miss};
    return ans;
        
    }
};