#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int>arr;
    arr={3,5,7,2,1,8,4,9};
    int pse[arr.size()];
    int n=arr.size();
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    stack<int>st;
    for(int i=0;i<n;i++){
        while(st.size()>0 && arr[i]<=st.top()){
            st.pop();
        }        
        if(st.size()==0) pse[i]=-1;
        else pse[i]=st.top();
        st.push(arr[i]);
    }
    cout<<endl;
    for(int i=0;i<n;i++){
        cout<<pse[i]<<" ";
    }
}