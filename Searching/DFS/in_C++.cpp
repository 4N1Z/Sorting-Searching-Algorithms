#include<bits/stdc++.h>
using namespace std;

//DFS in Trees
//Time Complexity - O(n)  where n is the number of nodes (as we are traversing each node once)
//Space Complexity - O(n) 

struct Node{
    int data;
    Node* left;
    Node* right;
    Node(int x){
        data=x;
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
