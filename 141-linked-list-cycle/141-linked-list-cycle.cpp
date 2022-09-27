/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    bool hasCycle(ListNode *head) {
        ListNode*slo,*fast;
        slo=head;
        fast=head;
        if(head==NULL)return false;
        if(head->next==head)return true;
        while(fast!=NULL and fast->next!=NULL)
        {
            slo=slo->next;
            fast=fast->next->next;
            if(slo==fast)return true;
        }
        return false;
    }
};