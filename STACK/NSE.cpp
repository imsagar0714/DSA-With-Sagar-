#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int>arr;
    arr={3,5,7,2,1,8,4,9};
    int nse[arr.size()];
    int n=arr.size();
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    nse[n-1]=-1;
    stack<int>st;
    st.push(arr[n-1]);
    for(int i=n-2;i>=0;i--){
        while(st.size()>0 && arr[i]<=st.top()){
            st.pop();
        }        
        if(st.size()==0) nse[i]=-1;
        else nse[i]=st.top();
        st.push(arr[i]);
    }
    cout<<endl;
    for(int i=0;i<n;i++){
        cout<<nse[i]<<" ";
    }
}