//Question: https://practice.geeksforgeeks.org/problems/intersection-of-two-sorted-linked-lists/1

Node* findIntersection(Node* head1, Node* head2)
{
    Node* l1 = head1;
    Node* l2 = head2;
    Node* res = NULL;
    Node* prev = NULL;
    while(l1 && l2){
        if(l1->data == l2->data){
            int data = l1->data;
            // while(l1 && l1->data == data)l1= l1->next;
            // while(l2 && l2->data == data)l2 = l2->next;
            Node *temp = new Node(data);
            if(!res) res = temp;
            else prev->next = temp;
            prev = temp;
            l1 = l1->next;
            l2 = l2->next;
        }else if(l1->data < l2->data){
            l1 = l1->next;
        }else{
            l2 = l2->next;
        }
    }
    return res;
}