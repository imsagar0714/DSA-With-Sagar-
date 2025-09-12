#include<iostream>
using namespace std;
bool search(int arr[], int size , int key){
    for(int i=0;i<size;i++){
        if(arr[i]==key){
            return 1;
        }
    }
    return 0;
}
int main(){
    int key;
    cout<<"enter the number"<<endl;
    cin>>key;
    int arr[10]={3,5,7,-1,2,1,-9,9,8,6};
    bool found=search(arr,10,key);
    if (found){
        cout<<"key is present"<<endl;
    }
    else{
        cout<<"key is absent"<<endl;
    }
    return 0;
}