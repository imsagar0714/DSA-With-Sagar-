#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[]={4,6,2,5,7,3,6};
    int n=7;
    stack<int>st;
    vector<int>nge(n);
    st.push(arr[n-1]);
    nge[n-1]=-1;
    for(int i=n-2;i>=0;i--){
        nge[i]=st.top();
        if(arr[i]>st.top())st.push(arr[i]);
    }
    for(int i=0;i<n;i++){
        cout<<nge[i]<<" ";
    }
}
