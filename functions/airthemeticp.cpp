#include<iostream>
using namespace std;
int ap(int n){
    int a=(3*n+7);
    return a;     
}
int main(){
    int n;
    cin>>n;
    int a= ap(n);
    cout<<"nth number is:"<<a;
}