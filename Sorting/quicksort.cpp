#include<bits/stdc++.h>
using namespace std;
int partition(int arr[] , int si , int ei){
    int count=0;
    int pivotelement=arr[(si+ei)/2];
    for(int i=si;i<=ei;i++){
        if(i==(si+ei)/2) continue;
        if(arr[i]<=pivotelement) count++;
    }
    int pivotIndex=count + si;            //because of the recursive call the pivot index changes again and again
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
void quicksort(int arr[], int si, int ei){       // si=startindex , ei=ending index
    if(si>=ei) return;
    int pi =partition(arr,si,ei);
    quicksort(arr,si,pi-1);
    quicksort(arr,pi+1,ei);
}
int main(){
    int arr[]={5,1,8,2,7,6,3,4};
    int n=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    quicksort(arr,0,n-1);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}