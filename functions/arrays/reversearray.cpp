#include<iostream>
using namespace std;
int reverse(int arr[], int size ){
   int start=0;
   int end=size-1;
   while(start<=end){
        int temp=arr[start];
        arr[start]=arr[end];
        arr[end]=temp;
        start++;
        end--;
   }
}
void printArray(int arr[], int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int main(){
    int arr[5]={3,5,2,7,1};
    int brr[5]={12,5,7,8,1};
    reverse(arr,5);
    reverse(brr,5);
    printArray(arr,5);
    printArray(brr,5);
}