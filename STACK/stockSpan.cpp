#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[]={100,80,60,81,70,60,75,85};
    int n=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    int span[n];
    stack<int>st;
    int pgi[n];
    pgi[0]=-1;
    st.push(0);
    span[0]=1;
    for(int i=1;i<n;i++){
        while(st.size() && arr[i]>=arr[st.top()]){
            st.pop();
        }
        if(st.size()==0) pgi[i]=-1;
        else pgi[i]=st.top();
        st.push(i);
    }
    cout<<endl;
    for(int i=1;i<n;i++){
        span[i]=i-pgi[i];
    }
    for(int i=0;i<n;i++){
        cout<<span[i]<<" ";
    }
}