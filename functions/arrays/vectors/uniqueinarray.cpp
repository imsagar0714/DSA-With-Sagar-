#include<iostream>
using namespace std;
int main(){
    int arr[7]={3,5,7,1,5,3,7};
    int n=7;
    int count;
    for(int i=0;i<n;i++){
        count=0;
        for(int j=0;j<n;j++){
            if( i!=j && arr[i]==arr[j]){
                count++;
            }
        }
        if(count==0) cout<<arr[i];
    }
}