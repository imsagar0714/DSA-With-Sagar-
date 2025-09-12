#include<iostream>
using namespace std;
int main(){
    int arr[5]={1,2,3,4,5};
    int pos=2;
    int num=10;
    int n=5;
    if(pos<0 && pos>n){
        cout<<"invalid"<<endl;
    }
    for(int i=n;i>pos;i--){
        arr[i]=arr[i+1];
    }
    arr[pos]=num;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    
}