#include<iostream>
using namespace std;
bool key(int n){
    if(n==5){
        return true;
    }
    else return false;
}
int main(){
    int n;
    cin>>n;
    if(key(n)){
        cout<<"jai shree ram";
    }
    else cout<<"null";
    
}