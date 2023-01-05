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
    private:
    ListNode*reverse(ListNode*head)
    {
        if(head->next==NULL or head==NULL)return NULL;
        ListNode*prev=NULL,*nxt=NULL,*cur=head;
        while(cur!=NULL)
        {
            nxt=cur->next;
            cur->next=prev;
            prev=cur;
            cur=nxt;
        }
        return prev;
    }
public:
    bool isPalindrome(ListNode* head) {
        if(head->next==NULL)return true;
        if(head->next->next==NULL)
        {
            if(head->val==head->next->val)return true;
            else
                 return false;
        }
        
        ListNode*slo=head,*fast=head;
        ListNode*prev=NULL;
        while(fast!=NULL and fast->next!=NULL)
        {
            prev=slo;
            slo=slo->next;
            fast=fast->next->next;
        }
        ListNode*newhead=reverse(slo);
        
        prev->next=NULL;
        fast=head;
        while(head!=NULL)
        {
            if(head->val!=newhead->val)return false;
            head=head->next;
            newhead=newhead->next;
        }
        return true;
    }
};