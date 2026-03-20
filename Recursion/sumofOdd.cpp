#include<bits/stdc++.h>
using namespace std;
void odd(int i,int & sum,int b){
    if(i>b) return;
    if(i%2!=0){
        sum+=i;
    }
    odd(i+1,sum,b);
}
int main(){
    int a;
    cin>>a;
    int b;
    cin>>b;
    int i=a;
    int sum=0;
    odd(i,sum,b);
    cout<<sum;
}