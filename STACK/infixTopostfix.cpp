#include<bits/stdc++.h>
using namespace std;
int prior(char ch){
    if(ch=='+' || ch=='-') return 1;
    else return 2;
}
string solve(string val1,string val2,char ch){
    string s ="";
    s+=val1;
    s+=val2;
    s.push_back(ch);
    return s;
}
int main(){
    stack<string>val;
    stack<char>op;
    string s="2+6*4/8-3";
    for(int i=0;i<s.size();i++){
        // check if s[i] is a digit (0-9)
        if(isdigit(s[i])){ 
            val.push(to_string(s[i]-48));
        }
        else{ // s[i]-> *,-,+,/
            if(op.size()==0)op.push(s[i]);
            else if(s[i]=='(') op.push(s[i]);
            else if(op.top()=='(') op.push(s[i]);
            else if(s[i]==')'){
                while(op.top()!='('){
                    char ch=op.top();
                    op.pop();
                    string val2=val.top();
                    val.pop();
                    string val1=val.top();
                    val.pop();
                    string ans=solve(val1,val2,ch);
                    val.push(ans);
                }
                op.pop(); // opening bracket ko hata diya
            }
            else if(op.size()==0 || prior(s[i])>prior(op.top())){
                op.push(s[i]);
            }
            else{
                while(op.size()>0 && prior(s[i])<=prior(op.top())){
                    // val1 op val2
                    char ch=op.top();
                    op.pop();
                    string val2=val.top();
                    val.pop();
                    string val1=val.top();
                    val.pop();
                    string ans=solve(val1,val2,ch);
                    val.push(ans);
                }
                op.push(s[i]);
            }
        }
    }
    // the op stack can have value , so make it empty
    while(op.size()>0){
        char ch=op.top();
        op.pop();
        string val2=val.top();
        val.pop();
        string val1=val.top();
        val.pop();
        string ans=solve(val1,val2,ch);
        val.push(ans);
    }
    cout<<val.top()<<endl;
}