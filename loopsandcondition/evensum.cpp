#include<iostream>
using namespace std;
int main(){
    int n,sum,i;
    cout<<"enter number";
    cin>>n;
    sum=0;
    i=2;
    while(i<=n){
        sum=sum+i;
        i=i+2;
    }
    cout<<sum;
}