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