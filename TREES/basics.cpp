#include<bits/stdc++.h>
using namespace std;
class Node{
public:
    int val;
    Node* left;
    Node* right;
    Node(int val){
        this->val=val;
        this->left=NULL;
        this->right=NULL;
    }
};
void display(Node* root){
    if(root==NULL) return;
    cout<<root->val<<" ";
    display(root->left);
    display(root->right);
}
int sum(Node* root){
    if(root==NULL) return 0;
    return root->val + sum(root->left) + sum(root->right);
}
int sizeT(Node* root){
    if(root==NULL) return 0;
    return 1 + sizeT(root->left) + sizeT(root->right);
}
int maxT(Node* root){
    if(root==NULL) return INT_MIN;
    int lmax=maxT(root->left);
    int rmax=maxT(root->right);
    return max(root->val,max(lmax,rmax));
}
int levels(Node* root){
        if(root==NULL) return 0;
        return  1 + max(levels(root->left),levels(root->right));
}
void nthlevel(Node* root,int curr,int level){
    if(root==NULL) return;
    if(curr==level){
        cout<<root->val<<" ";
        return;
    }
    nthlevel(root->left,curr+1,level);
    nthlevel(root->right,curr+1,level);
}
void levelorderqueue(Node* root){
    queue<Node*>q;
    q.push(root);
    while(q.size()>0){
        Node* temp=q.front();
        q.pop();
        cout<<temp->val<<" "; 
        if(temp->left) q.push(temp->left);
        if(temp->right) q.push(temp->right);
    }
    cout<<endl;
}
int main(){
    Node* a=new Node(1);
    Node* b=new Node(2);
    Node* c=new Node(3);
    Node* d=new Node(4);
    Node* e=new Node(5);
    Node* f=new Node(6);
    Node* g=new Node(7);
    a->left=b;
    a->right=c;
    b->left=d;
    b->right=e;
    c->left=f;
    c->right=g;
    display(a);
    cout<<endl;
    cout<<sum(a);
    cout<<endl;
    cout<<sizeT(a)<<endl;  
    cout<<maxT(a);
    cout<<endl;
    nthlevel(a,1,3);
    cout<<endl;
    levelorderqueue(a);
}