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
    ListNode* deleteMiddle(ListNode* head) {
        if(head==NULL or head->next==NULL)return NULL;
        
        ListNode*slo,*fast,*prev=NULL;
        slo=head;
        fast=head;
        while(fast!=NULL and fast->next!=NULL)
        { 
            prev=slo;
            slo=slo->next;
            fast=fast->next->next;
            
        }
        prev->next=slo->next;
        return head;
        
    }
};