//Question: https://practice.geeksforgeeks.org/problems/remove-duplicates-from-an-unsorted-linked-list/1

Node* remove_duplicates(Node* root){

    Node *prev = NULL, *curr = root;
    unordered_set<int> unique;
    while(curr!=NULL){
        if(unique.find(curr->data) != unique.end()){
            prev->next = curr->next;
            delete(curr);
        }else{
            unique.insert(curr->data);
            prev = curr;
        }
        curr = prev->next;
    }
}