#include<iostream>
using namespace std;
int main(){
    int n,x;
    int arr[]={1,2,2,3,3,3,3,3,4,4,5,6,7,7,8,9};
    n=16;
    x=4;
    bool flag=false;
    int lo=0;
    int hi=n-1;
    while(lo<=hi){
        int mid=(lo+hi)/2;
        if(arr[mid]==x){
            if(arr[mid-1]!=x){
                flag=true;
                cout<<mid;
                break;
            }
            else{
                hi=mid-1;
            } 

        }
        else if(arr[mid]<x) lo=mid+1;
        else hi=mid-1;
    }
    if(flag==false){
        cout<<-1;
    }
}