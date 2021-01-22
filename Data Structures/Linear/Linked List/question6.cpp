//Question: https://www.geeksforgeeks.org/remove-duplicates-from-a-sorted-linked-list/
Node *removeDuplicates(Node *root)
{
    if(root == NULL) return NULL;
    Node* curr = root;
    Node* next = NULL;
    while(curr->next!=NULL){
        if(curr->data == curr->next->data){
            next = curr->next;
            curr->next = curr->next->next;
            free(next);
        }else{
            curr = curr->next;
        }

    }
    return root;
}