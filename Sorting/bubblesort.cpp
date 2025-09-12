#include<iostream>
using namespace std;
int main(){
    int arr[8];
    int n=8;
    cout<<"enter elements of array";
    for(int i=0;i<8;i++){
        cin>>arr[i];
    }
    for(int i=0;i<8;i++){
        cout<<arr[i]<<" ";
        
    }
    cout<<endl;
    //bubble sort optimised
    for(int i=0;i<n-1;i++){
        bool flag = true;
        for(int j=0;j<n-1-i;j++){
            if(arr[j]>arr[j+1]){
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
                flag=false;
            }

        }
        if(flag==true){ //swap didnt happen
            break;
        }
    }    
    for(int i=0;i<8;i++){
        cout<<arr[i]<<" ";
    }
}