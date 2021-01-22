//Question3: https://practice.geeksforgeeks.org/problems/detect-loop-in-linked-list/1

bool detectLoop(Node* head)
{
    Node *slow = head, *fast = head;
    while(slow && fast && fast->next){
        slow = slow->next;
        fast = fast->next->next;
        if(slow == fast)return true;
    }
    return false;
}