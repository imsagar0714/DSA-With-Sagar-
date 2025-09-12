#include<iostream>
using namespace std;
int main(){
    int n,sum,i;
    cout<<"enter number upto sum";
    cin>>n;
    sum=0;
    i=1;
    while(i<=n){
        sum=sum+i;
        i=i+1;
    }
    cout<<"sum of numbers are:"<<sum;
}