#include<bits/stdc++.h>
using namespace std;
int powerTwo(int n){
    if(n==1) return 1;
    if(n%2!=0) return 0;
    powerTwo(n/2);
}
int main(){
    int n;
    cout<<"enter the number"<<endl;
    cin>>n;
    if(powerTwo(n)){
        cout<<" yeah";
    }
    else{
        cout<<" naah";
    }
}