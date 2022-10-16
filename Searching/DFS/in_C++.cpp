#include<bits/stdc++.h>
using namespace std;

//DFS in Trees

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
    
    Let's see how DFS works. Depth First Search visit one neighbour of a node everytime and goes till end 
    and then recursively comes back at other neighbours.
    Didn't got the point ? Let me show you how :)
    
    🔹 First we are at root node 
    lets have the idea of recursion through stack - [10]
                  10 👈                                
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
    Add the data of current node in array and then go towards it's left child if present 
    the array becomes = [10]
    
    🔹 Now we are at node 20 
    stack -> [10, 20]
                  10
               /      \
              /        \
             /          \
            20 👈       30
          /    \      /    \ 
         /      \    /      \    
        40      50  60      70
         \
          \
          80
     Add the data of current node in array and then go towards it's left child if present 
      the array becomes = [10, 20]
    
    🔹 Now we are at node 40
    stack -> [10, 20, 40]
                  10
               /      \
              /        \
             /          \
            20          30
          /    \      /    \ 
         /      \    /      \    
        40👈    50  60      70
         \
          \
          80
          
       Add the data of current node in array and then go towards it's left child if present 
       the array becomes = [10, 20 , 40]
       
       There's no left child so we will go to it's right child , i.e. 80
       pop the parent 40 from stack , i.e. stack -> [10, 20]
       and add it in array , -> [10, 20, 40, 80]
       
       Now, How to know which was previous parent ? Obiously through the stack.
       stack.top() = 20 , pop it and we got the parent.
       
      🔹 Now we are again at node 20, lets visit it's right child now
                stack -> [10]
                  10
               /      \
              /        \
             /          \
            20          30
          /    \      /    \ 
         /      \    /      \    
        40    👉🏻50  60      70
         \
          \
          80
       
       Add the data of current node in array and then go towards it's left child if present 
       the array becomes = [10, 20 , 40, 80, 50]
       Current node is leaf node , so now we need previous parent of recursion.
       stack.top() = 10, pop it and we got the parent
       Now traverse the right part of the parent 
       
       and repeat the above steps.
       
       Finally , we got the dfs - > [10, 20, 40, 80, 50, 30, 60, 70]
    
    
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
