//Question: https://practice.geeksforgeeks.org/problems/stack-using-two-queues/1

void QueueStack :: push(int x)
{
    q1.push(x);
    return;    
}


int QueueStack :: pop()
{
    if(q1.empty())return -1;
    while(q1.size()!=1){
        q2.push(q1.front());
        q1.pop();
    }

    int x = q1.front();
    q1.pop();
    swap(q1, q2);
    return x;
 
}