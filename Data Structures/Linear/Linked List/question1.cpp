//Question: https://practice.geeksforgeeks.org/problems/reverse-a-linked-list/1

// iterative approach
struct Node* reverseList(struct Node *head)
{
    struct Node *prev = NULL, *next = NULL, *curr = head;
    while(curr != NULL){
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }
    return prev;
}

// recursive approach
struct Node* head;
struct Node* reverseListR(struct Node* curr){
    if(curr->next == NULL){
        head = curr;
        return;
    }
    reverseListR(curr->next);
    struct Node* next = curr->next;
    next->next = curr;
    curr->next = NULL;
}
