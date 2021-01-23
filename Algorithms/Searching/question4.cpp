//Question: https://practice.geeksforgeeks.org/problems/count-squares3649/1

// basic approach
class Solution {
  public:
    int countSquares(int N) {
        int count = 0;
        for(int i=1;i*i<N;i++){
            count++;
        }
        return count;
    }
};

// efficient approach
class Solution {
  public:
    int countSquares(int N) {
        return sqrt(N-1);
    }
};