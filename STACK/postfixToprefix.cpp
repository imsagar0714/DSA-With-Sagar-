#include<bits/stdc++.h>
using namespace std;
string solve(string val1,string val2,char ch){
    string s ="";
    s.push_back(ch);
    s+=val1;
    s+=val2;
    return s;
}
int main(){
    stack<string>val;
    string s="79+4*8/3-";
    for(int i=0;i<s.size();i++){
        // check if s[i] is a digit (0-9)
        if(isdigit(s[i])){ 
            val.push(to_string(s[i]-48));
        }
        else{ // s[i]-> *,-,+,/
            string val2=val.top();
            val.pop();
            string val1=val.top();
            val.pop();
            string ans=solve(val1,val2,s[i]);
            val.push(ans);
        }
    }
    cout<<val.top()<<endl;
}