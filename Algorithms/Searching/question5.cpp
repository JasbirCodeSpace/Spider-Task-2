//Question: https://practice.geeksforgeeks.org/problems/middle-of-three2926/1

class Solution{
  public:
    int middle(int a, int b, int c){
        if(a>b){
            if(b>c) return b;
            else if(a>c) return c;
            else return a;
        }else{ // b>=a
            if(a>c) return a;
            else if(b>c) return c;
            else return b;
        }
    }
};