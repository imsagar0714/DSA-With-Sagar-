#include<bits/stdc++.h>
using namespace std;
void Max(int arr[],int n,int max,int i){
    if(i==n){
        cout<<max;
        return;
    }
    if(max<arr[i]) max=arr[i];
    return Max(arr,n,max,i+1);
}
int Maxx(int arr[],int n,int i){
    if(i==n) return INT_MIN;
    return max(arr[i],Maxx(arr,n,i+1));
}
int Min(int arr[],int n,int mini,int i){
    if(i==n) return mini;
    mini=min(mini,arr[i]);
    return Min(arr,n,mini,i+1);
}
int Sum(int arr[],int n,int sum,int i){
    if(i==n) return sum;
    sum+=arr[i];
    return Sum(arr,n,sum,i+1);
}
int printindex(int arr[],int n,int a,int i){
    if(arr[i]==a) return i;
    return printindex(arr,n,a,i+1);
}
void printreverse(int arr[],int n,int i){
    if(i==n) return;
    printreverse(arr,n,i+1);
    cout<<arr[i]<<" ";
}
int main(){
    int arr[]={2,3,6,8,5,12,56,89};
    int n=8;
    int max=0;
    Max(arr,n,max,0);
    cout<<endl;
    cout<<Maxx(arr,n,0);
    cout<<endl;
    int mini=INT_MAX;
    cout<<Min(arr,n,mini,0);
    int sum=0;
    cout<<endl;
    cout<<Sum(arr,n,sum,0);
    int a=56;
    cout<<endl;
    cout<<printindex(arr,n,a,0);
    cout<<endl;
    printreverse(arr,n,0);
}