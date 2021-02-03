//Question: https://practice.geeksforgeeks.org/problems/height-of-binary-tree/1
#include<bits/stdc++.h>
using namespace std;

// Recursive
class Solution{
    public:
    int height(struct Node* node){
        if(node == NULL)return 0;
        int left = height(node->left);
        int right = height(node->right);
        return max(left, right)+1;
    }
};

//Iterative
class Solution{
    public:
    int height(struct Node* node){
        if(node == NULL)return 0;
        queue<Node *> q;
        q.push(node);
        int h = 0;
        while(!q.empty()){
            int size = q.size();
            while(size--){
                Node *temp = q.front();
                q.pop();
                if(temp->left)q.push(temp->left);
                if(temp->right)q.push(temp->right);
        }
        h++;
    }
    return h;
    }
};