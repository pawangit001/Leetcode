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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode*prev=NULL,*slo=head,*fast=head;
       if(head==NULL)return NULL;
        while(n>0)
        {
            fast=fast->next;
            n--;
        }
        while(fast!=NULL)
        {
            prev=slo;
            slo=slo->next;
            fast=fast->next;
        }
        if(slo==head){
            slo=head->next;
            delete(head);
            return slo;
        }
     prev->next=slo->next;
        return head;
    }
};