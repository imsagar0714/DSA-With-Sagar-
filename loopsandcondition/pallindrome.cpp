#include<iostream>
using namespace std;
int main(){
    int n,temp,r,rev;
    cout<<"enter a number";
    cin>>n;
    temp=n;
    rev=0;
    while(n>0){
        r=n%10;
        rev=rev*10+r;
        n=n/10;
    }
    cout<<rev<<endl;
    if(rev=temp){
        cout<<"pallindrome";
    }
    else{
        cout<<"not pallindrome";
    }
}