#include<iostream>
using namespace std;
void swapalt(int arr[],int size){
    for(int i=0;i<size;i=i+2){
        if(i<size){
            int temp=arr[i];
            arr[i]=arr[i+1];
            arr[i+1]=temp;
        }
    }
}
void printArray(int arr[],int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int main(){
    int arr[10]={8,5,7,3,2,45,7,8,3,2};
    int brr[5]={2,5,7,83,2};
    swapalt(arr,10);
    swapalt(brr,5);
    printArray(arr,10);
    printArray(brr,5);
}