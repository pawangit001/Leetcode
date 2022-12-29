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
    ListNode* reverse(ListNode*cur,ListNode*last)
    {
         ListNode*prev=NULL;
        ListNode*end=last->next;
        while(cur!=end )
        {
           ListNode* nxt=cur->next;
            cur->next=prev;
            prev=cur;
            cur=nxt;
         
        }
        return last;
    }
    ListNode* solve(ListNode*head,int k)
    {
           ListNode*node=head;
        for(int i=0;i<k-1 && node;i++)
        {
           // if(node!=NULL)
            node=node->next;
        }
        if(!node)return head;
       
        ListNode*nxt=node->next;
        ListNode*prev=reverse(head,node);
        
      
        head->next= solve(nxt,k);
           // head->next=tail;
       
        return prev;
    
    
    }
public:
    ListNode* reverseKGroup(ListNode* head, int k) {
         
        return solve(head,k);
    }
};