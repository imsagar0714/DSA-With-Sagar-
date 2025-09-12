#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[]={7,1,2,5,8,4,9,3,6};
    int n=9;
    int maxsum=INT_MIN;
    int sum=0;
    int k=4;
    int maxidx=-1;
    for(int i=0;i<k;i++){
        sum+=arr[i];
    }
    //sliding window
    int i=1;
    int j=k;
    while(j<n){
        sum=sum+arr[j]-arr[i-1];
        if(maxsum<sum){
            maxsum=sum;
            maxidx=i;
        }
        i++;
        j++;
    }
    cout<<maxsum<<endl;
    cout<<maxidx;
}