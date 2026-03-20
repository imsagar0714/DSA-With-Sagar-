#include<bits/stdc++.h>
using namespace std;
int hcf(int a,int b){
    if(a==0) return b;
    return hcf(b%a,a);
}
int main(){
    int a;
    cin>>a;
    int b;
    cin>>b;
    cout<<hcf(a,b);
}