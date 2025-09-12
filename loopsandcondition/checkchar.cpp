#include<iostream>
using namespace std;
int main(){
    char ch;
    cout<<"enter character";
    cin>>ch;
    if(ch>='a' && ch<='z'){
        cout<<"lowercase";
    }
    else if(ch>='A' && ch<='Z'){
        cout<<"uppercase";
    }
    else if(ch>=1 && ch<=9){
        cout<<"numeric";
    }

}