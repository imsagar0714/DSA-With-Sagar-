#include<iostream>
using namespace std;
void find(int n , int *p1 , int *p2){
    *p2=n%10;
    while(n>9){
        n=n/10;
    }
    *p1=n;
    return;  
}
int main(){
    int n;
    cout<<"enter a number"<<endl;
    cin>>n;
    int fd,ld;
    int *p1=&fd;
    int *p2=&ld;
    find(n,p1,p2);
    cout<<fd<<" "<<ld;
}