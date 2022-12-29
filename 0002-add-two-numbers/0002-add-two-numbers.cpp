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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode*dummy=new ListNode(0);
        if(l1==NULL)return l2;
        else if(l2==NULL)return l1;
        int carry=0;
        ListNode*head=NULL,*tail=NULL;
        
        while(l1!=NULL or  l2!=NULL or carry!=0)
        {
            int digit=0;
            if(l1!=NULL)
            {
                digit=l1->val;
                l1=l1->next;
                
            }
            if(l2!=NULL)
            {
                digit+=l2->val;
                l2=l2->next;
            }
            digit+=carry;
            carry=digit/10;
            if(digit>=10)digit=digit%10;
            ListNode* node=new ListNode(digit);
           if(head==NULL)
           {
               head=node;
               tail=node;
               
           }
           else
               {
                tail->next=node;
                tail=tail->next;
               }
        }
        return head;
            
    }
};