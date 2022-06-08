ListNode* reverseList(ListNode* head) {
    if (head == NULL || head->next == NULL){
        return head;
    }      
    ListNode* temp1 = reverseList(head->next);
    ListNode* temp2 = temp1;
    while(temp2->next != NULL){
        temp2 = temp2->next;
    }
    temp2->next = head;
    head->next = NULL;
    return temp1;
    
}