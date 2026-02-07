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
    string s="-/*+79483";
    for(int i=s.size()-1;i>=0;i--){
        // check if s[i] is a digit (0-9)
        if(isdigit(s[i])){ 
            val.push(s[i]-'0');
        }
        else{ // s[i]-> *,-,+,/
            int val1=val.top();
            val.pop();
            int val2=val.top();
            val.pop();
            char ch=s[i];
            int ans=solve(val1,val2,ch);
            val.push(ans);
        }
    }
    cout<<val.top()<<endl;
}