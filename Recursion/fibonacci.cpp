#include<iostream>
using namespace std;
int fibo(int n){
    if(n==1 || n==2) return 1;
    return fibo(n-1) + fibo(n-2);     // pahle n-1 waale ko call lagti hai jab wo value le aata hai toh
}                                     // n-2 pe recursive calls lagengi
int main(){
    for(int i=1;i<=6;i++){
        cout<<fibo(i)<<" ";
    }
}