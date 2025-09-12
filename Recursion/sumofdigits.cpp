#include<iostream>
using namespace std;
int Sum(int n,int &sum){
    if(n==0) return sum;
    sum=sum+n%10;
    Sum(n/10,sum);
}
int main(){
    int n=4237;
    int sum=0;
    Sum(n,sum);
    cout<<sum;
}