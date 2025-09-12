#include<bits/stdc++.h>
using namespace std;
int main(){
    string str;
    cout<<"enter string"<<endl;
    cin>>str;
    int n=str.length();
    for(int i=0;i<str.length();i++){
        cout<<str[i];
    }
    cout<<endl;
    reverse(str.begin() + n/2,str.end());
    for(int i=0;i<str.length();i++){
        cout<<str[i];
    }
}