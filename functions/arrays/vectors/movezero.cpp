#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[6]={4,6,0,5,0,3};
    int j=0;
    for(int i=0;i<6;i++){
        if(arr[i]!=0){
            swap(arr[i],arr[j]);
            j++;
        }
    }
    for(int i=0;i<6;i++)cout<<arr[i]<<" ";
}