#include<bits/stdc++.h>
using namespace std;
bool check(string s) {
    stack<char> st;
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == '(') {
            st.push('(');
        } 
        if (s[i] == ')') {
            if (st.empty()) return false;  // closing bracket without opening
            st.pop();
        }
    }
    return st.empty(); // true if all brackets matched
}
int main(){
    string s=")()(";
    if(check(s)) cout<<"valid";
    else cout<<"not";
    return 0;
}