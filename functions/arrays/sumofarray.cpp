#include<iostream>
using namespace std;
int sumarray(int arr[],int size){
    int sum=0;
    for(int i=0;i<size;i++){
        sum=sum+arr[i];
    }
    return sum;

}
int main(){
    int size,arr[5];
    cout<<"enter size"<<endl;
    cin>>size;
    cout<<"enter array elements"<<endl;
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    int sum=sumarray(arr,size);
    cout<<"sum="<<sum;
}