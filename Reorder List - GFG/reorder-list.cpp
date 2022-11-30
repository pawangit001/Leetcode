//{ Driver Code Starts
#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
/* Linked list Node */
struct Node {
    int data;
    struct Node* next;

    Node(int x) {
        data = x;
        next = NULL;
    }
};



// } Driver Code Ends
/* Following is the Linked list node structure */


class Solution{ 
    
public:
  
  Node*reverse(Node*head)
  {
      Node*next=NULL,*prev=NULL,*cur=head;
      if(head==NULL or head->next==NULL)return head;
      while(cur!=NULL)
      {
          next=cur->next;
          cur->next=prev;
          prev=cur;
          cur=next;
      }
      return prev;
  }


    void reorderList(Node* head) {
        // Your code here
        Node*slow=head;
        Node*fast=head;
        if(head==NULL)return;
        while(fast!=NULL and fast->next!=NULL)
        {
            slow=slow->next;
            fast=fast->next->next;
        }
        Node*newhead=slow->next;
        slow->next=NULL;
       newhead=reverse(newhead);
       Node*cur=head;
       while(cur!=NULL and newhead!=NULL)
       {
           Node*next=cur->next;
           cur->next=newhead;
           newhead=newhead->next;
           cur=cur->next;
           cur->next=next;
           cur=cur->next;
       }
      //if(cur!=NULL)cur=cur
    }
};

//{ Driver Code Starts.



/* Function to create a new Node with given data */
struct Node* newNode(int data) {
    struct Node* new_Node = new Node(data);
    new_Node->data = data;
    new_Node->next = NULL;
    return new_Node;
}

void printList(struct Node* Node) {
    while (Node != NULL) {
        printf("%d ", Node->data);
        Node = Node->next;
    }
    printf("\n");
}

void freeList(struct Node* head) {
    struct Node* temp;
    while (head != NULL) {

        temp = head;
        head = head->next;
        free(temp);
    }
}

int main(void) {
    int t, n, m, i, x;

    cin >> t;
    while (t--) {
        struct Node* temp, *head;
        cin >> n;
        cin >> x;
        head = new Node(x);
        temp = head;
        for (i = 0; i < n - 1; i++) {
            cin >> x;
            temp->next = new Node(x);
            temp = temp->next;
        }
        
        Solution ob;
        
        ob.reorderList(head);
        printList(head);
        freeList(head);
    }
    return 0;
}

// } Driver Code Ends