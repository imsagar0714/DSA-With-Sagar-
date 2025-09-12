#include<bits/stdc++.h>
using namespace std;
int main(){
    stack<int>st;
    for(int i=0;i<5;i++){
        st.push(i+10);
    }
    stack<int>temp;
    while(st.size()>0){
        cout<<st.top()<<" ";
        temp.push(st.top());
        st.pop();
    }
    cout<<endl;
    stack<int>temp2;
    while(temp.size()>0){
        temp2.push(temp.top());
        temp.pop();
    }
    while(temp2.size()>0){
        st.push(temp2.top());
        temp2.pop();
    }
    while(st.size()>0){
        cout<<st.top()<<" ";
        temp.push(st.top());
        st.pop();
    }
}