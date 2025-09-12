#include<iostream>
using namespace std;
int main(){
    int n,i,j;
    cout<<"enter a number"<<endl;
    cin>>n;
    i=1;
    int a=n;
    while(i<=n){
        j=1;
        while(j<=a){
            cout<<"*";
            j++;
        }
        a=a-1;
        cout<<endl;
        i++;
    }
}    