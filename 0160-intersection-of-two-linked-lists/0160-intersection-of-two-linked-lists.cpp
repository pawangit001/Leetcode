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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        int n1=0,n2=0;
        ListNode*cur=headA;
        while(cur!=NULL)n1++,cur=cur->next;
        cur=headB;
        while(cur!=NULL)n2++,cur=cur->next;
        if(n1>n2)
        {
            int d=n1-n2;
            while(d--)headA=headA->next;
        }
        else
        {
            int d=n2-n1;
            while(d--)headB=headB->next;
        }
        while(headA!=headB)
            headA=headA->next,headB=headB->next;
        return headA;
    }
};