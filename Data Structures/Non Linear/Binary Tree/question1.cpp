//Question: https://practice.geeksforgeeks.org/problems/level-order-traversal/1
#include<bits/stdc++.h>
using namespace std;
vector<int> levelOrder(Node* node)
{
    vector<int> result;
    queue<Node* > q;
    if(node == NULL){
        return result;
    }else{
        q.push(node);
        while(!q.empty()){
            Node *temp = q.front();
            result.push_back(temp->data);
            q.pop();
            if(temp->left)q.push(temp->left);
            if(temp->right)q.push(temp->right);
        }
    }
    
    return result;
    
}