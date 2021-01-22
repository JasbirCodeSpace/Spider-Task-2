//Question: https://practice.geeksforgeeks.org/problems/remove-loop-in-linked-list/1

void removeLoop(Node* head)
{
   Node *slow = head, *fast = head;
   bool cycle = false;
    while(slow && fast && fast->next){
        slow = slow->next;
        fast = fast->next->next;
        if(slow == fast){
            cycle = true;
            break;
        }
    }

    if(cycle){
        slow = head;
        if(fast == slow){
            while(fast->next != slow)fast = fast->next;
        }else{
            while(slow->next != fast->next){
                slow = slow->next;
                fast = fast->next;
            }
        }
        fast->next = NULL;
    }
}