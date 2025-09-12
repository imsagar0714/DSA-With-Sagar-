#include<bits/stdc++.h>
using namespace std;
string removedup(string s){
    stack<char>st;
    st.push(s[0]);
    for(int i=1;i<s.size();i++){
        if(s[i]!=st.top()) st.push(s[i]);
    }
    string res="";
    while(st.size()>0){
        res+=st.top();  // or res.push_back(st.top());
        st.pop();
    }
    reverse(res.begin(),res.end());
    return res;
}
int main(){
    string s="aaabbcddaabffg";
    cout<<s;
    cout<<endl;
    s=removedup(s);
    cout<<s;
}