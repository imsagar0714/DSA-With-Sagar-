#include<iostream>
using namespace std;
int main(){
    int arr[10]={5,8,9,6,43,65,98,23,12,56};
    int x;
    cout<<"enter the number"<<endl;
    cin>>x;
    int count=0;
    for(int i=0;i<10;i++){
        if(arr[i]>x) count++;
    }
    cout<<count;
}