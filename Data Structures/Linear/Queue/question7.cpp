//Question: https://practice.geeksforgeeks.org/problems/queue-reversal/1

// using recursion
queue<int> rev(queue<int> q)
{
    if(q.empty())
        return q;
    int x = q.front();
    q.pop();
    q = rev(q);
    q.push(x);
    return q;
}

// using stack
queue<int> rev(queue<int> q)
{
    stack<int> s;
    while(!q.empty()){
        s.push(q.front());
        q.pop();
    }
    while(!s.empty()){
        q.push(s.top());
        s.pop();
    }
    return q;
}