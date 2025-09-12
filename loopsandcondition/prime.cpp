#include<iostream>
using namespace std;
int main(){
    int n,flag,i;
    cout<<"enter a number";
    cin>>n;
    flag=0;
    i=2;
    if(n==1)
    {
        cout<<"neither prime nor non prime";
        return 0;
    }
    else{
    while(i<n){
        if(n%i==0)
        {
        flag=1;
        }
        else{
            i++;
        }
    }
    if(flag==0){
        cout<<"prime";
    }
    else{
        cout<<"not prime";
    }
    }
}