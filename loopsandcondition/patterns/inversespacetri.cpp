#include<iostream>
using namespace std;
int main(){
    int n,i,j;
    cout<<"enter a number"<<endl;
    cin>>n;
    i=1;
    while(i<=n){
        j=1;
        int space=i-1;
        while(space){
            cout<<" ";
            space=space-1;
        }
        while(j<=n-i+1){
            cout<<"*";
            j++;
        }
        cout<<endl;
        i++;
    }
}        