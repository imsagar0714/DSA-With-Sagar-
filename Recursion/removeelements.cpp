#include<bits/stdc++.h>
using namespace std;
void removeones(int arr[],vector<int>&v,int idx,int n){
    if(idx==n){
        return ;
    }
    if(arr[idx]==1) removeones(arr,v,idx+1,n);
    else{
        v.push_back(arr[idx]);
        return removeones(arr,v,idx+1,n);
    }
}
int main(){
    int arr[]={1,2,4,5,1,1,8,1,5,8,12};
    int n=sizeof(arr)/sizeof(arr[0]);
    vector<int>v;
    removeones(arr,v,0,n);
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
}