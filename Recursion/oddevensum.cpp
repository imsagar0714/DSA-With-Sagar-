#include<bits/stdc++.h>
using namespace std;
void Sum(int a , int b, int &sum){
    if(a>b) return;
    if(a==b){
        sum+=a;
        return;
    }
    if(a%2!=0){
        sum=sum+a;
        Sum(a+2,b,sum);
    }
    else{
        Sum(a+1,b,sum);
    }
}
int main(){
    int a=2;
    int b=9;
    int sum=0;
    Sum(a,b,sum);
    cout<<sum;
}