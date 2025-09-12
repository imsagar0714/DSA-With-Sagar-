#include<bits/stdc++.h>
using namespace std;
int Power(int a , int b){
    if(b==0) return 1;
    int ans=Power(a,b/2);              // calculates half power
    if(b%2==0) return ans*ans;        //if poweer even
    else return a*ans*ans;            // if power odd
}
int main(){
    cout<<Power(2,6);
}