#include<bits/stdc++.h>
using namespace std;
void display(queue<int>&q){
    int n=q.size();
    for(int i=1;i<=n;i++){
        cout<<q.front()<<" ";
        q.push(q.front());
        q.pop();
    }
}
void reverse(queue<int>&q){
    int n=q.size();
    stack<int>st;
    while(q.size()>0){
        st.push(q.front());
        q.pop();
    }
    while(st.size()>0){
        q.push(st.top());
        st.pop();
    }
}
int main(){
    int arr[]={1,2,3,4,5,6,7,8};
    int n=8;
    queue<int>q;
    for(int i=0;i<n;i++){
        q.push(arr[i]);
    }
    display(q);
    stack<int>st;
    for(int i=1;i<=n/2;i++){
        st.push(q.front());
        q.pop();
    }
    while(st.size()>0){
        q.push(st.top());
        st.pop();
    }
    for(int i=1;i<=n/2;i++){
        st.push(q.front());
        q.pop();
    }
    while(st.size()>0){
        q.push(st.top());
        st.pop();
        q.push(q.front());
        q.pop();
    }
    cout<<endl;
    reverse(q);
    display(q);
}