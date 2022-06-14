// link - https://leetcode.com/problems/remove-nth-node-from-end-of-list/
// tutorial - https://youtu.be/Lhu3MsXZy-Q
/*
    Time complexity - O(n) (single iteration)
    Space complexity - O(1)
*/

ListNode* removeNthFromEnd(ListNode* head, int n) {
    ListNode* start = new ListNode();
    start->next = head;
    ListNode* fast = start;
    ListNode* slow = start;
    for(int i=1; i<=n; i++){
        fast = fast->next;
    }
    while(fast->next != NULL){
        slow = slow->next;
        fast = fast->next;
    }
    
    slow->next = slow->next->next;
    return start->next;
}