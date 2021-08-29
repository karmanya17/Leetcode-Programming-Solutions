/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* swapPairs(ListNode* head) {

        ListNode* curr=head,*prev=NULL,*nextptr=NULL;
        int k=2;
        while(curr!=NULL &&k>0)
        {
         nextptr=curr->next;
            curr->next=prev;
            prev=curr;
            curr=nextptr;
            k--;
        }
        if(nextptr!=NULL)
        {
            head->next=swapPairs(nextptr);
        }
        return prev;
    }
};
