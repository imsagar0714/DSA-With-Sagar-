#include<iostream>
using namespace std;
int reversee(int n,int &rev){
    if(n==0) return rev;
    rev=rev*10 +(n%10);
    reversee(n/10,rev);
}
int main(){
    int n=4237;
    int rev=0;
    reversee(n,rev);
    cout<<rev;
}