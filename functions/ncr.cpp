#include<iostream>
using namespace std;
int factorial(int n){
    int fact=1;
    for(int i=1;i<=n;i++){
        fact=fact*i;
    }
    return fact;
}
int nCr(int n,int r){
    int num=factorial(n);
    int den=factorial(n-r)*factorial(r);
    return num/den;
    
}
int main(){
    int n,r;
    cout<<"enter n"<<endl;
    cin>>n;
    cout<<"enter r"<<endl;
    cin>>r;
    int ncr= nCr(n,r);
    cout<<ncr;
}