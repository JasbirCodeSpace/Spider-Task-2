//Question: https://practice.geeksforgeeks.org/problems/reverse-a-linked-list-in-groups-of-given-size/1

struct node *reverse (struct node *head, int k)
{ 
    int i = 0;
    struct node *prev = NULL, *curr = head, *next = NULL;
    while(curr!=NULL && i<k){
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
        i++;
    }
    if(next != NULL){
        head->next = reverse(next, k);
    }

    return prev;
}