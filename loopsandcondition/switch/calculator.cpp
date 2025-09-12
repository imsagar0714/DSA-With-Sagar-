#include<iostream>
using namespace std;
int main(){
    int a,b;
    char op;
    cout<<"enter a number a"<<endl;
    cin>>a;
    cout<<"enter a number b"<<endl;
    cin>>b;
    cout<<"enter operation"<<endl;
    cin>>op;
    switch(op){
        case '+': 
        cout<<(a+b)<<endl;
        break;

        case '-': 
        cout<<(a-b)<<endl;
        break;

        case '*': 
        cout<<(a*b)<<endl;
        break;

        case '/': 
        cout<<(a/b)<<endl;
        break;

        default: cout<<"no operation available"<<endl;
    }
}