#include<bits/stdc++.h>
using namespace std;
int partition(int arr[] , int si , int ei){
    int count=0;
    int pivotelement=arr[(si+ei)/2];
    for(int i=si;i<=ei;i++){
        if(i==(si+ei)/2) continue;
        if(arr[i]<=pivotelement) count++;
    }
    int pivotIndex=count + si;
    swap(arr[(si+ei)/2],arr[pivotIndex]);
    int i=si;
    int j=ei;
    while(i<pivotIndex && j>pivotIndex){
        if(arr[i]<=pivotelement) i++;
        if(arr[j]>pivotelement) j--;
        else if(arr[i]>pivotelement && arr[j]<=pivotelement){
            swap(arr[i],arr[j]);
            i++;
            j--;
        }
    }
    return pivotIndex;
}
int ksmallest(int arr[], int si, int ei,int k){       
    int pi =partition(arr,si,ei);
    if((pi+1)==k) return arr[pi];
    else if((pi+1)<k) return ksmallest(arr,pi+1,ei,k);
    else return ksmallest(arr,si,pi-1,k);
}
int main(){
    int arr[]={5,12,82,20,71,6,3,4};
    int n=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    int k=5;
    cout<<ksmallest(arr,0,n-1,k);
    
}