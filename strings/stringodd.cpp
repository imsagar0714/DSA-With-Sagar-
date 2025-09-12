#include<bits/stdc++.h>
using namespace std;
int main(){
    string str;
    cout<<"enter string";
    cin>>str;
    for(int i=0;i<str.length();i++){
        if(i%2!=0){
            str[i]='#';
        }
    }
    for(int i=0;i<str.length();i++){
        cout<<str[i];
    }
}