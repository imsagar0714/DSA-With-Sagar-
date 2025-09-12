#include<iostream>
using namespace std;
int fibonacci(int n){
    int a=0;
    int b=1;
    int sum=0;
    for(int i=1;i<n;i++){
        a=b;
        b=sum;
        sum=a+b;
    }
    return sum;
}
int main(){
    int n;
    cin>>n;
    int a= fibonacci(n);
    cout<<"nth number is:"<<a;
}