#include<iostream>
using namespace std;
int maximum(int arr[]){
    int max=arr[0];
    for(int i=0;i<7;i++){
        if(max<arr[i]){
            max=arr[i];
        }
    }
    return max;
}
int smaximum(int arr[]){
    int max=arr[0];
    for(int i=0;i<7;i++){
        if(max<arr[i]){
            max=arr[i];
        }
    }
    int smax=arr[0];
    for(int i=0;i<7;i++){
        if(smax<arr[i] && arr[i] != max){
            smax=arr[i];
        }
    }
    return smax;
}
int main(){
    int arr[7];
    cout<<"enter elemnets of array"<<endl;
    for(int i=0;i<7;i++){
        cin>>arr[i];
    }
    cout<<"largest is :"<<maximum(arr)<<endl;
    cout<<"second largest is:"<<smaximum(arr)<<endl;
}