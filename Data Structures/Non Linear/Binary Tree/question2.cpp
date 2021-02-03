//Question: https://practice.geeksforgeeks.org/problems/reverse-level-order-traversal/1

#include<bits/stdc++.h>
using namespace std;
vector<int> reverseLevelOrder(Node *root)
{
    vector<int> result;
    queue<Node *> q;
    stack<Node *> s;
    if(root == NULL)return result;
    else{
        q.push(root);
        while(!q.empty()){
            Node *temp = q.front();
            q.pop();
            s.push(temp);
            if(temp->right)q.push(temp->right);
            if(temp->left)q.push(temp->left);
            
        }
    }
    while(!s.empty()){
        result.push_back(s.top()->data);
        s.pop();
    }
    return result;
}