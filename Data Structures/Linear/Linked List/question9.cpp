//Question: https://practice.geeksforgeeks.org/problems/add-two-numbers-represented-by-linked-lists/1
struct Node* reverse(struct Node* head){
    
    struct Node* curr = head, *prev = NULL, *next = NULL;
    while(curr != NULL){
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }
    return prev;
}
struct Node* addTwoLists(struct Node* first, struct Node* second)
{
    struct Node* n1 = reverse(first);
    struct Node* n2 = reverse(second);
    struct Node* prev = NULL;
    struct Node* res = NULL;
    int carry = 0;
    int sum = 0;
    while(n1 || n2){
        sum = (n1?n1->data:0)+(n2?n2->data:0)+carry;
        carry = sum>=10?1:0;
        struct Node* temp = new Node(sum%10);
        if(res == NULL)
            res = temp;
        else
            prev->next = temp;
        prev = temp;
        if(n1)
            n1 = n1->next;
        if(n2)
            n2 = n2->next;
        
    }
    
    if(carry){
        struct Node* temp = new Node(carry);
        prev->next = temp;
    }
    
    res = reverse(res);
    return res;

}