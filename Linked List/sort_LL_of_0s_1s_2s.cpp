// link - https://practice.geeksforgeeks.org/problems/given-a-linked-list-of-0s-1s-and-2s-sort-it/1
// tutorial - https://youtu.be/ogmBt6f9hw8

/* 
    Time complexity - O(N)
    Space complexity - O(1)
*/

Node* segregate(Node *head) {
Node* head_zero = new Node(-1);
Node* tail_zero = head_zero;
Node* head_one = new Node(-1);
Node* tail_one = head_one;
Node* head_two = new Node(-1);
Node* tail_two = head_two;
Node* curr = head;
while(curr!=NULL){
    if(curr->data == 0){
        tail_zero->next = curr;
        tail_zero = curr;
        
    }else if(curr->data == 1){
        tail_one->next = curr;
        tail_one = curr;
    }else if(curr->data == 2){
        tail_two->next = curr;
        tail_two = curr;
    }
    curr = curr->next;
}
// // attaching three LL
if(head_one->next != NULL){
    tail_zero->next = head_one->next;
}else{
    tail_zero->next = head_two->next;
}

tail_one->next = head_two->next;
tail_two->next = NULL;
head = head_zero->next;
delete head_zero;
delete head_one;
delete head_two;
return head;
}