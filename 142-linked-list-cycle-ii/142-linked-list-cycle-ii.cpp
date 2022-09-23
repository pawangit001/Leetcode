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
    ListNode *detectCycle(ListNode *head) {
         if(head==NULL)return head;
        ListNode*slow=head;
        ListNode*fast=head;
       // if(fast==NULL)return NULL;
        //if(fast==slow)return slow;
        while(fast!=NULL and fast->next!=NULL)
        {
            
            
            slow=slow->next;
            fast=fast->next->next;
            if(slow==fast)break;
            
        }
        if(fast==NULL or fast->next==NULL)return NULL;
        fast=head;
        while(slow!=fast)
        {
            slow=slow->next;
            fast=fast->next;
        }
        return slow;
       
    }
};