#include<iostream>
using namespace std;
int main(){
    int arr[]={1,2,3,4,5,6,7,8,9,10,10,11,12,13};
    int n=14;
    int lo=0;
    int hi=n-1;
    while(lo<=hi){
        int mid=(lo+hi)/2;
        if(arr[mid]==mid+1){
           lo=mid+1; 
        }
        if(arr[mid]=mid){
            if(arr[mid]==arr[mid-1]){
                cout<<arr[mid];
                break;
            }
            else hi=mid-1;
        }   
    
    }
}