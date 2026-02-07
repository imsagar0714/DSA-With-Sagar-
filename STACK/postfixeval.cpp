#include<bits/stdc++.h>
using namespace std;
int solve(int val1,int val2,char ch){
    if(ch=='+') return val1+val2; 
    if(ch=='-') return val1-val2; 
    if(ch=='/') return val1/val2; 
    if(ch=='*') return val1*val2;
    return 0; 
}
int main(){
    stack<int>val;
    string s="79+4*8/3-";
    for(int i=0;i<s.size();i++){
        // check if s[i] is a digit (0-9)
        if(isdigit(s[i])){ 
            val.push(s[i]-'0');
        }
        else{ // s[i]-> *,-,+,/
            int val2=val.top();
            val.pop();
            int val1=val.top();
            val.pop();
            int ans=solve(val1,val2,s[i]);
            val.push(ans);
        }
    }
    cout<<val.top()<<endl;
}