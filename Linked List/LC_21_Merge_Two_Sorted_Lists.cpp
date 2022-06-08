ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
    if (l1 == NULL)
        return l2;
    if (l2 == NULL)
        return l1;
    ListNode* head = NULL;
    ListNode* tail = NULL;
    while(l1 != NULL && l2 != NULL){
        if (l1->val <= l2->val){
            ListNode *newNode = new ListNode(l1->val);
            if (head == NULL){
                head = newNode;
                tail = newNode;
            }
            tail->next = newNode;
            tail = newNode;
            l1 = l1->next;
        }else{
            ListNode* newNode = new ListNode(l2->val);
            if (head == NULL){
                head = newNode;
                tail = newNode;
            }
            tail->next = newNode;
            tail = newNode;
            l2 = l2->next;
        }
        if (l1 == NULL){
            tail->next = l2;
        }else{
            tail->next = l1;
        }
        
    }
    return head;
}