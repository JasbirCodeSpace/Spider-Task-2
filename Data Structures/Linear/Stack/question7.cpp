//Question: https://leetcode.com/problems/design-a-stack-with-increment-operation/

#include <bits/stdc++.h>
using namespace std;
class CustomStack
{
public:
    vector<int> stack;
    int top;
    CustomStack(int maxSize)
    {
        top = maxSize;
    }

    void push(int x)
    {
        if (stack.size() >= top)
            return;
        stack.push_back(x);
        return;
    }

    int pop()
    {
        if (stack.size() == 0)
            return -1;
        int x = stack[stack.size() - 1];
        stack.pop_back();
        return x;
    }

    void increment(int k, int val)
    {
        for (int i = 0; i < k && i < stack.size(); i++)
            stack[i] += val;
        return;
    }
};