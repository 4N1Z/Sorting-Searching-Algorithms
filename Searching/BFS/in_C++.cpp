#include<bits/stdc++.h>
using namespace std;

//BFS IN TREES
//BFS also called LEVEL ORDER TRAVERSAL

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

bool bfs(Node* root,int x){
    queue<Node*> q;     
    q.push(root);
    while(!q.empty()){      // traverse till queue is not empty
        int n=q.size();
        while(n--){         // traverse in a level order way
            Node* front=q.front();
            q.pop();
            if(front->data==x){
                return true;
            }
            if(front->left){    // if current node has left child
                q.push(front->left);
            }
            if(front->right){   // if current node has right child
                q.push(front->right);
            }
        }
    }
    return false;       // if not found
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

    int y;
    cin>>y;
    if(bfs(root,y)){
        cout<<"Found\n";
    }
    else{
        cout<<"Not Found\n";
    }
    return 0;
}
