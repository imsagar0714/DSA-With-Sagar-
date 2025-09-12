#include<iostream>
using namespace std;
int count(int n){
    int digits=0;
    while(n>0){
        n=n/10;
        digits++;
    }
    return digits;
}
int square(int n){
    return n*n;
}
int main(){
    int n;
    cin>>n;
    int c =count(n);
    int sq=square(n);
    cout<<c<<" "<<sq;
}