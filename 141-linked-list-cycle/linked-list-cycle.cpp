class Solution {
public:
    bool hasCycle(ListNode *head) {
        
        if(head==NULL){
            return false;
        }

        int length=0;
        ListNode* slow=head;
        ListNode* fast=head;
        if(fast->next != NULL){
            fast=head->next;
        }else{
            return false;
        }

        while(slow!=fast){
            if(fast -> next == NULL){
                return false;
            }
            slow=slow->next;
            fast=fast->next;
            if(fast -> next == NULL){
                return false;
            }
            fast=fast->next;
        }
        return true;;
    }
};