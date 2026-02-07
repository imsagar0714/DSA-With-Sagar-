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
void levelorder(Node* root){
    if(root==NULL) return;
    int n=levels(root);
    for(int i=1;i<=n;i++){
        nthlevel(root,1,i);
        cout<<endl;
    }
}
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
Node* iosuc(Node* root){
    Node* suc=root->right;
    while(suc->left) suc=suc->left;
    return suc;
}
Node* iop(Node* root){
    Node* pred=root->left;
    while(pred->right) pred=pred->right;
    return pred;
}
Node* deletenode(Node* root,int key){
    if(!root) return NULL;
    if(root->val==key){
        //case 1 : root is leaf
        if(root->left==NULL && root->right==NULL){
            return NULL;
        }
        //case 2: 1 child
        else if(root->left==NULL || root->right==NULL){
            if(root->left) return root->left;
            if(root->right) return root->right;
        }
        //case 3 : 2 child
        else{
            // replace the root with inorder pred/succ
            // after replacing delete the pred/succ
            Node* suc=iosuc(root);
            root->val=suc->val;
            root->right=deletenode(root->right,suc->val);
        }
    }
    else if(root->val>key){
        root->left=deletenode(root->left,key);
    }
    else{
        root->right=deletenode(root->right,key);
    }
    return root;
}
int main(){
    int arr[]={1,2,3,4,5,INT_MIN,6,7,INT_MIN,8,INT_MIN,9,10,INT_MIN,11,INT_MIN,12,INT_MIN,13,INT_MIN,14,15,16,INT_MIN,17,INT_MIN,INT_MIN,18,INT_MIN,19,INT_MIN,INT_MIN,INT_MIN,20,21,22,23,INT_MIN,24,25,26,29,INT_MIN,INT_MIN,28,INT_MIN,INT_MIN};
    int n=sizeof(arr)/sizeof(arr[0]);
    Node* root=construct(arr,n);
    levelorder(root);
    cout<<endl;
    deletenode(root,10);
    levelorder(root);
}