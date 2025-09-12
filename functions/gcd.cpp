#include<iostream>
using namespace std;
int min(int a , int b){
    if(a<b){
        return a;
    }
    else return b;
}
int gcd(int a , int b){
    int hcf=1;
    for(int i=min(a,b);i>=1;i--){
        if(a%i==0 && b%i==0){
            hcf=i;
            break;
        }
    }
    return hcf;
}
int main(){
    int a,b;
    cout<<"enter first number"<<endl;
    cin>>a;
    cout<<"enter second number"<<endl;
    cin>>b;
    cout<<"hcf is :"<<gcd(a,b);
}