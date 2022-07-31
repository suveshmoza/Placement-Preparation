ListNode *detectCycle(ListNode *head) {
    if(head==NULL||head->next==NULL) return NULL;
    ListNode *slow=head,*fast=head;
    while(slow&&fast&&fast->next){
        slow=slow->next;
        fast=fast->next->next;
        if(slow==fast)break; 
    }
    if(slow!=fast) return NULL;
    slow=head;
    while(slow!=fast){
        slow=slow->next;
        fast=fast->next;
    }
    return fast;
}