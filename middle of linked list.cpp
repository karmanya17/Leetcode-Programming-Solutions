class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        ListNode* slow=head;
        ListNode* fast=head->next;
        int c=0;
        while(slow!=NULL)
        {
            slow=slow->next;
            c++;
        }
        slow=head;
        while(fast!=NULL && fast->next!=NULL)
        {
            slow=slow->next;
            fast=fast->next->next;

        }
        if(c%2==0)
        slow=slow->next;
        return slow;

    }
};
