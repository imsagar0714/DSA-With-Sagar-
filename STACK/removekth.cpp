#include<bits/stdc++.h>
using namespace std;
void print(stack<int>&st){
    stack<int>temp;
    while(st.size()>0){
        temp.push(st.top());
        st.pop();
    }
    //printing from another stack 
    while(temp.size()>0){
        cout<<temp.top()<<" ";
        st.push(temp.top());
        temp.pop();
    }
}
void removek(stack<int>&st,int k){
    stack<int>temp;
    for(int i=1;i<=k;i++){
        temp.push(st.top());
        st.pop();
    }
    temp.pop();
    while(temp.size()>0){
        st.push(temp.top());
        temp.pop();
    }
}
int main(){
    stack<int>st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);
    st.push(60);
    st.push(70);
    st.push(80);
    st.push(90);
    st.push(100);
    print(st);
    removek(st,5); 
    cout<<endl;
    print(st);
    
}