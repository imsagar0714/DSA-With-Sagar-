#include<iostream>
using namespace std;
int Reverse(int n,int &rev){
    if(n==0) return rev;
    int l=n%10;
    rev=rev*10+l;
    Reverse(n/10,rev);
}
int main(){
    int n=4237;
    int rev=0;
    Reverse(n,rev);
    cout<<rev;
}