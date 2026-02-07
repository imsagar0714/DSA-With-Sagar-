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
void topview(Node* root,vector<int>&ans){
    unordered_map<int,int>map;  // <level,Node->val>
    queue< pair<Node*,int> >q;  // <Node*,level>
    q.push({root,0});
    while(q.size()>0){
        Node* temp=(q.front()).first;
        int level=(q.front()).second;
        q.pop();
        if(map.find(level)==map.end()){
            map[level]=temp->val;
        }
        if(temp->left){
            q.push({temp->left,level-1});
        }
        if(temp->right){
            q.push({temp->right,level+1});
        }
    }
    int maxlevel=INT_MIN;
    int minlevel=INT_MAX;
    for(auto x : map){
        int level=x.first;
        maxlevel=max(maxlevel,level);
        minlevel=min(minlevel,level);
    }
    for(int i=minlevel;i<=maxlevel;i++){
        ans.push_back(map[i]);
    }
}
int main(){
    int arr[]={1,2,3,4,5,INT_MIN,6,INT_MIN,9,INT_MIN,INT_MIN,7,INT_MIN,INT_MIN,INT_MIN,8};
    int n=sizeof(arr)/sizeof(arr[0]);
    Node* root=construct(arr,n);
    vector<int>ans;
    topview(root,ans);
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
}