#include<bits/stdc++.h>
using namespace std;

//BFS IN TREES
//BFS also called LEVEL ORDER TRAVERSAL

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

bool bfs(Node* root,int x){
    queue<Node*> q;
    q.push(root);
    while(!q.empty()){
        int n=q.size();
        while(n--){
            Node* front=q.front();
            q.pop();
            if(front->data==x){
                return true;
            }
            if(front->left){
                q.push(front->left);
            }
            if(front->right){
                q.push(front->right);
            }
        }
    }
    return false;
}

int main(){
    /*
        VISUAL REPRESENTATION OF example TREE
        
                  10
               /      \
              /        \
             /          \
            20          30
          /    \      /    \ 
         /      \    /      \    
        40      50  60      70
         \
          \
          80
          
          How Level Order works ?
          
          First we are at root node as shown-
          ➡️     10
               /      \
              /        \
             /          \
            20          30
          /    \      /    \ 
         /      \    /      \    
        40      50  60      70
         \
          \
          80
          
          Add the elements of this level in array [[10]]
          then visit next level 
          
                  10
               /      \
              /        \
             /          \
      ➡️   20          30
          /    \      /    \ 
         /      \    /      \    
        40      50  60      70
         \
          \
          80
         Add the elements of this level in array [[10] , [20,30]]
         then visit next level  
          
                  10
               /      \
              /        \
             /          \
            20          30
          /    \      /    \ 
         /      \    /      \    
    ➡️  40      50  60      70
         \
          \
          80
        Add the elements of this level in array [[10] , [20,30] , [40,50,60,70]]
        then visit next level  
        
                  10
               /      \
              /        \
             /          \
            20          30
          /    \      /    \ 
         /      \    /      \    
        40      50  60      70
         \
          \
    ➡️    80
        Add the elements of this level in array [[10] , [20,30] , [40,50,60,70] , [80]]
        then visit next level  , as this was the last level , now our queue will become empty and loop will break;
        Hurrah! we got the BFS traversal of Binary Tree 
        
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
