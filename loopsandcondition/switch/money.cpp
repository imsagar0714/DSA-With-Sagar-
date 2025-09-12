#include<iostream>
using namespace std;
int main(){
    int a,b,c,d;
    char op;
    cout<<"enter number of 100 rupees note "<<endl;
    cin>>a;
    cout<<"enter number of 50 rupee notes "<<endl;
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