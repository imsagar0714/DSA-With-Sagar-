#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> arr(26,0);
    string s="riya deshmankar my love";
    for(int i=0;i<s.length();i++){
        int ch=s[i];
        int ascii=(int)ch;
        arr[ascii-97]++;
    }
    int max=0;
    for(int i=0;i<26;i++){
        if(arr[i]>max) max=arr[i];
    }
    for(int i=0;i<26;i++){
        if(arr[i]==max){
            int ascii=i+97;
            cout<<(char)ascii<<' '<<max<<endl;
        }
    }
}