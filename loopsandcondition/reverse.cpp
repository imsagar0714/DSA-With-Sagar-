#include<iostream>
using namespace std;
int main(){
    int n,r,rev;
    cout<<"enter a number";
    cin>>n;
    rev =0;
    r=0;
    while(n>0){
        r=n%10;
        rev=rev*10+r;
        n=n/10;
    }
    cout<<rev;
    
}