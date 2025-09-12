#include<iostream>
using namespace std;
bool ifsorted( int arr[], int size){
    for(int i=0;i<size-1;i++){
        if(arr[i]>arr[i+1]){
            return false;
        }
        
    }
    return true;
}
int main(){
    int arr[6]={4,6,7,13,22,25};
    int size=6;
    if(ifsorted(arr,size)){
        cout<<"sorted";
    }
    else cout<<"not sorted";
}