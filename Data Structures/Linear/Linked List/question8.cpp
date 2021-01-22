//Question: https://practice.geeksforgeeks.org/problems/add-1-to-a-number-represented-as-linked-list/1


Node* reverse(Node *head){
    
    Node *curr = head, *prev = NULL, *next = NULL;
    while(curr != NULL){
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }
    return prev;
}
Node* addOne(Node *head) 
{
    if(!head) return NULL;
    Node* newNode = reverse(head);
    Node* curr = newNode, *prev = NULL;
    int carry = (curr->data +1)/10;
    curr->data = (curr->data +1)%10;
    
    prev = curr;
    curr = curr->next;
    
    while(curr != NULL){
        int data = curr->data;
        curr->data = (data+carry)%10;
        carry = (data+carry)/10;
        
        prev= curr;
        curr = curr->next;
    }
    if(carry){
        Node* temp = new Node(carry);
        prev->next = temp;
        
    }
    
    newNode = reverse(newNode);
    return newNode;
}