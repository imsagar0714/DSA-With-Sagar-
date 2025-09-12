#include<iostream>
using namespace std;
int main(){
    int n,i,j;
    cout<<"enter a number"<<endl;
    cin>>n;
    i=1;
    while(i<=n){
        j=1;
        int space=n-i;
        while(space){
            cout<<" ";
            space=space-1;
        }
        while(j<=i){
            cout<<"*";
            j++;
        }
        int a=1;
        while(a<=i-1){
            cout<<"*";
            a++;
        }
        cout<<endl;
        i++;
    }
}