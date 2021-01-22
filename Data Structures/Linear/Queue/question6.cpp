// Question: https://practice.geeksforgeeks.org/problems/implement-queue-using-linked-list/1

void MyQueue:: push(int x)
{
       QueueNode *temp = new QueueNode(x);
       temp->next = NULL;
       if(front == NULL){
           front = rear = temp;
           return;
       }
       rear->next = temp;
       rear = temp;
}


int MyQueue :: pop()
{
    if(front == NULL) return -1;
    int d = front->data;
    if(front == rear){
        front = rear = NULL;
    }else{
        front = front->next;
    }
    return d;
          
}