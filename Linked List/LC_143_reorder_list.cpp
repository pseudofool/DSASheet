// link - https://leetcode.com/problems/reorder-list/
// tutorial - https://youtu.be/mD7L5l2NmGU

/*
    Time complexity - O(n)
    Space complexity - O(1)
*/
ListNode* findMid(ListNode* head){
    if(head == NULL){
        return head;
    }
    ListNode* slow = head;
    ListNode* fast = head;
    while(fast->next != NULL && fast->next->next!=NULL){
        slow = slow->next;
        fast = fast->next->next;
    }
    return slow;
}

ListNode *findEnd(ListNode* head){
    ListNode* temp = head;
    while(temp->next != NULL){
        temp = temp->next;
    }
    return temp;
}

ListNode *reverse(ListNode *head)
{
    if (head == NULL || head->next == NULL){
        return head;
    }

    ListNode *smallAns = reverse(head->next);
    ListNode *tail = findEnd(smallAns);
    tail->next = head;
    head->next = NULL;
    head = smallAns;
    return head;


}
void reorderList(ListNode* head) {
    ListNode* mid = findMid(head);
    ListNode* first = head;
    ListNode* second = mid->next;
    mid->next = NULL;
    second = reverse(second);
    
    while(second!=NULL){
        ListNode* temp1 = first->next;
        first->next = second;
        ListNode* temp2 = second->next;
        second->next = temp1;
        first = temp1;
        second = temp2;
    }

}