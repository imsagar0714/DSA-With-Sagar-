#include<iostream>
using namespace std;
int main(){
    int n,i,j;
    cout<<"enter a number"<<endl;
    cin>>n;
    i=1;
    while(i<=n){
        j=1;
        char ch='A'+n-i;
        while(j<=i){
            cout<<ch<<" ";
            ch++;
            j=j+1;
        }
        cout<<endl;
        i++;
    }
} 