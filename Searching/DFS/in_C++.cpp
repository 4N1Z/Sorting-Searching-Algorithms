#include<bits/stdc++.h>
using namespace std;

//DFS in Trees

// Here's what a node comprise -  [left | data | right]

struct Node{
    int data;       
    Node* left;     // left pointer which gives left child of node
    Node* right;    // right pointer which gives right child of node
    Node(int x){
        data=x;     // constructor to instantiate node and give a value (here integer value)
        left=NULL;
        right=NULL;
    }
};

bool dfsRecursive(Node* root,int x){
    if(root==NULL)return false;
    
    bool left=dfsRecursive(root->left,x);
    bool check= root->data==x;
    bool right=dfsRecursive(root->right,x);
    return check||left||right;
}

bool dfsIterative(Node* root,int x){
    stack<Node*> s;
    Node* curr=root;
    while(!s.empty() || curr!=NULL){
        while(curr!=NULL){
            s.push(curr);
            curr=curr->left;
        }
        curr=s.top();
        s.pop();
        if(curr->data==x)return true;
        curr=curr->right;
    }
    return false;
}


int main(){
    
    /* TREE VISUAL REPRESENTATION ->
               10
            /       \
           /         \
        20              30
      /    \          /    \
    40      50      60      70
       \
        80
        
        */
    
    Node* root=new Node(10);
    Node* first=new Node(20);
    Node* second=new Node(30);
    Node* third=new Node(40);
    Node* fourth=new Node(50);
    Node* fifth=new Node(60);
    Node* sixth=new Node(70);
    Node* seventh=new Node(80);
    root->left=first;
    root->right=second;
    first->left=third;
    first->right=fourth;
    second->left=fifth;
    second->right=sixth;
    third->right=seventh;

    int x;
    cin>>x;
    if(dfsRecursive(root,x)){
        cout<<"Found\n";
    }
    else{
        cout<<"Not Found\n";
    }

    int y;
    cin>>y;
    if(dfsIterative(root,y)){
        cout<<"Found\n";
    }
    else{
        cout<<"Not Found\n";
    }
    return 0;
}
