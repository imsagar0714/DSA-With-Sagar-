#include<iostream>
using namespace std;
int stair(int n){
    //if(n==2) return 2;
    if(n==0) return 1;
    //if(n==3) return 4;
    if(n<0) return 0;
    return stair(n-1) + stair(n-2) + stair(n-3);
}
int main(){
    cout<<stair(4);
}