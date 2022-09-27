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
    ListNode* removeElements(ListNode* head, int val) {
        ListNode*prev=NULL,*cur=head,*h1;
        if(head==NULL)return NULL;
        while(cur!=NULL)
        {
            if(cur->val==val)
            {
                ListNode*t=cur;
                cur=cur->next;
                if(prev!=NULL)
                prev->next=cur;
                delete(t);
            }
            else
                
           {   if(prev==NULL)h1=cur;
                prev=cur;
            cur=cur->next;}
            
           
        }
        if(prev==NULL)
            return NULL;
            return h1;
    }
};