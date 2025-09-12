#include<bits/stdc++.h>
using namespace std;
int main(){
    string str;
    cout<<"enter string";
    cin>>str;
    char max1=str[0];
    char max2=str[0];
    for(int i=0;i<str.length();i++){
        if(max1<str[i]){
            max2=max1;
            max1=str[i];
        }
        else if(max2<str[i] && str[i] !=max1){
            max2=str[i];
        }
    }
    cout<<max2;
}