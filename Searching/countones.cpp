#include<iostream>
using namespace std;
int main(){
    int arr[]={0,0,0,0,0,0,0,0,1,1,1,1,1,1};
    int n=14;
    int lo=0;
    int hi=n-1;
    int target=1;
    int firstidx=-1;
    while(lo<=hi){
        int mid=(lo+hi)/2;
        if(arr[mid]==target){
            if(mid==0){
                firstidx=mid;
                break;
            }
            else if(arr[mid-1]!=target){
                firstidx=mid;
                break;
            }
            else{
                hi=mid-1;
            }
        }
        else if(arr[mid]<target){
            lo=mid+1;
        }
        else{
            hi=mid-1;
        }
    }
    if(firstidx==-1){
        cout<<0;
    }
    else{
        cout<<n-firstidx;
    }
}