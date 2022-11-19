//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

/* A binary tree node has data, pointer to left child
   and a pointer to right child */
struct Node {
    int data;
    struct Node* left;
    struct Node* right;
};
Node* newNode(int val) {
    Node* temp = new Node;
    temp->data = val;
    temp->left = NULL;
    temp->right = NULL;
    return temp;
}
Node* buildTree(string str) {
    // Corner Case
    if (str.length() == 0 || str[0] == 'N') return NULL;

    // Creating vector of strings from input
    // string after spliting by space
    vector<string> ip;

    istringstream iss(str);
    for (string str; iss >> str;) ip.push_back(str);

    // Create the root of the tree
    Node* root = newNode(stoi(ip[0]));

    // Push the root to the queue
    queue<Node*> queue;
    queue.push(root);

    // Starting from the second element
    int i = 1;
    while (!queue.empty() && i < ip.size()) {

        // Get and remove the front of the queue
        Node* currNode = queue.front();
        queue.pop();

        // Get the current node's value from the string
        string currVal = ip[i];

        // If the left child is not null
        if (currVal != "N") {

            // Create the left child for the current node
            currNode->left = newNode(stoi(currVal));

            // Push it to the queue
            queue.push(currNode->left);
        }

        // For the right child
        i++;
        if (i >= ip.size()) break;
        currVal = ip[i];

        // If the right child is not null
        if (currVal != "N") {

            // Create the right child for the current node
            currNode->right = newNode(stoi(currVal));

            // Push it to the queue
            queue.push(currNode->right);
        }
        i++;
    }

    return root;
}


// } Driver Code Ends
//User function Template for C++

class Solution{
    public:
    bool areAnagrams(Node *root1, Node *root2)
    {
    
        if(root1==NULL and root2==NULL)return true;
        if(root1==NULL or root2==NULL)return false;
         queue<Node *>q1;
         queue<Node *>q2;
         q1.push(root1);
         q2.push(root2);
         while(1)
         {
             int n1=q1.size();
             int n2=q2.size();
             if(n1!=n2)return false;
             if(n1==0)break;
             vector<int>t1,t2;
             while(n1>0)
             {
                 Node*curt1=q1.front();
                 q1.pop();
                 n1--;
                
                 if(curt1->left!=NULL)q1.push(curt1->left);
                 if(curt1->right!=NULL)q1.push(curt1->right);
                 
                 Node*curt2=q2.front();
                 q2.pop();
                 
                 if(curt2->left!=NULL)q2.push(curt2->left);
                 if(curt2->right!=NULL)q2.push(curt2->right);
                 
                 t1.push_back(curt1->data);
                 t2.push_back(curt2->data);
                 
             }
             sort(t1.begin(),t1.end());
             sort(t2.begin(),t2.end());
             if(t1!=t2)return false;
         }
         return true;
    }
};

//{ Driver Code Starts.

/* Driver program to test size function*/
int main() {
    int t;
    scanf("%d\n", &t);
    while (t--) {
        string treeString1, treeString2;
        getline(cin, treeString1);
        Node *root1 = buildTree(treeString1);
        getline(cin, treeString2);
        Node *root2 = buildTree(treeString2);
        Solution ob;
        cout << ob.areAnagrams(root1, root2) << endl;
    }
    return 0;
}

// } Driver Code Ends