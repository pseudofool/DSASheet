Node * removeDuplicates( Node *head) {
    if(head == NULL || head->next == NULL){
        return head;
    }
    unordered_map<int,int> mp;
    Node* prev = NULL;
    Node* curr = head;
    while(curr!=NULL){
        if(mp[curr->data] > 0){
            Node* temp = curr;
            prev->next = curr->next;
            curr = curr->next;
            delete temp;
        }else{
            mp[curr->data]++;
            prev = curr;
            curr = curr->next;
        }
    }
    return head;
}