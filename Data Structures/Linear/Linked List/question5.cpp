//Question: https://www.geeksforgeeks.org/find-first-node-of-loop-in-a-linked-list/

Node* findStartingOfLoop(Node* head){

    Node *slow = head, *fast = head;
    while(slow && fast && fast->next){
        slow = slow->next;
        fast = fast->next->next;
        if(slow == fast)break;
    }

    if(slow == head){
        slow = head;
        if(slow == fast) return slow;
        while(slow->next != fast->next){
            slow = slow->next;
            fast = fast->next;
        }
        return slow->next;
    }else{
        return NULL;
    }
}