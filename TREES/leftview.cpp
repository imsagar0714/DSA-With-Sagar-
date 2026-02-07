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
vector<int> left(Node* root){
    vector<int>ans;
    if(!root) return ans;
    queue<Node*>q;
    q.push(root);
    while(q.size()>0){
        int n = q.size();   // number of nodes in current level
        for(int i = 0; i < n; i++) {
            Node* temp = q.front();
            q.pop();

            // first node of the current level → leftmost
            if(i == 0) ans.push_back(temp->val);

            if(temp->left) q.push(temp->left);
            if(temp->right) q.push(temp->right);
        }
    }
    return ans;
}
vector<int> right(Node* root){
    vector<int>ans;
    if(!root) return ans;
    queue<Node*>q;
    q.push(root);
    while(q.size()>0){
        int n = q.size();   // number of nodes in current level
        for(int i = 0; i < n; i++) {
            Node* temp = q.front();
            q.pop();
            if(i == n-1) ans.push_back(temp->val);
            if(temp->left) q.push(temp->left);
            if(temp->right) q.push(temp->right);
        }
    }
    return ans;
}
int main(){
    int arr[]={1,2,3,INT_MIN,5,INT_MIN,4};
    int n=sizeof(arr)/sizeof(arr[0]);
    Node* root=construct(arr,n);
    vector<int>ans;
    ans=left(root);
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
    cout<<endl;
    ans=right(root);
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
}