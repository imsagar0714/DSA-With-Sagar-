#include<bits/stdc++.h>
using namespace std;
void generate(string s,int n){
    if(s.size()==n){
        cout<<s<<endl;
        return;
    }
    generate(s+'0',n);
    if(s=="" || s[s.size()-1]=='0') generate(s+'1',n);
}
int main(){
    int n;
    cin>>n;
    generate("",n);
}