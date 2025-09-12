#include<iostream>
using namespace std;
int main(){
    int n,i,j;
    cout<<"enter a number";
    cin>>n;
    i=1;
    while(i<=n){
        j=1;
        int space=i-1;
        while(space){
            cout<<" ";
            space=space-1;
        }
        int a=n-i+1;
        while(a){
            cout<<a;
            a=a-1;
        }
        cout<<endl;
        i++;
    }
}    
