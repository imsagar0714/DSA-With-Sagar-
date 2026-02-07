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
Node* construct(int arr[],int n){
    queue<Node*>q;
    Node* root=new Node(arr[0]);
    q.push(root);
    int i=1;
    int j=2;
    while(q.size()>0 && i<n){
        Node* temp=q.front();
        q.pop();
        Node* l;
        Node* r;
        if(arr[i]!=INT_MIN) l=new Node(arr[i]);
        else l=NULL;
        if(j!=n && arr[j]!=INT_MIN) r=new Node(arr[j]);
        else r=NULL;
        temp->left=l;
        temp->right=r;
        if(l) q.push(l);
        if(r) q.push(r);
        i+=2;
        j+=2;
    }
    return root;
}
void horlevel(Node* root , int& minlevel , int& maxlevel , int level){
    if(root==NULL) return;
    minlevel=min(minlevel,level);
    maxlevel=max(maxlevel,level);
    horlevel(root->left,minlevel,maxlevel,level-1);
    horlevel(root->right,minlevel,maxlevel,level+1);
}
void topview(Node* root , vector<int>&top,int level){
    if(root==NULL) return;
    if(top[level]==INT_MIN) top[level]=root->val;
    topview(root->left,top,level-1);
    topview(root->right,top,level+1);
}
int main(){
    int arr[]={1,2,3,4,5,INT_MIN,6,INT_MIN,9,INT_MIN,INT_MIN,7,INT_MIN,INT_MIN,INT_MIN,8};
    int n=sizeof(arr)/sizeof(arr[0]);
    Node* root=construct(arr,n);
    int minlevel=0;
    int maxlevel=0;
    horlevel(root,minlevel,maxlevel,0);
    int horlevels=maxlevel-minlevel+1;
    vector<int>top(horlevels,INT_MIN);
    //cout<<minlevel<<" "<<maxlevel;
    topview(root,top,-minlevel);
    for(int i=0;i<top.size();i++){
        cout<<top[i]<<" ";
    }
}