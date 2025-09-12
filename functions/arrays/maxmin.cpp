#include<iostream>
using namespace std;
int max(int arr[],int size){
    int max = arr[0];
    for(int i=0;i<size;i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }
    return max;
}
int min(int arr[],int size){
    int min = arr[0];
    for(int i=0;i<size;i++){
        if(arr[i]<min){
            min=arr[i];                    
        }
    }
    return min;
}
int main(){
    int size,arr[100];
    cout<<"enter size"<<endl;
    cin>>size;
    cout<<"enter elements of array"<<endl;
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    int maxvalue=max(arr,size);
    int minvalue=min(arr,size);
    cout<<"max value"<<maxvalue<<endl;
    cout<<"min value"<<minvalue<<endl;
}