#include<bits/stdc++.h>
using namespace std;
int main(){
    string str;
    cout<<"enter a string"<<endl;
    cin>>str;
    string s=str;
    reverse(str.begin(),str.end());
    string con=s+str;
    cout<<con;  
}