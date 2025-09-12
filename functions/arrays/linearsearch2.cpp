#include<iostream>
using namespace std;
int main(){
    int arr[6];
    cout<<"enter elements of array"<<endl;
    for(int i=0;i<6;i++){
        cin>>arr[i];
    }
    int x;
    cout<<"enter element x"<<endl;
    cin>>x;
    bool flag=false;
    for(int i=0;i<6;i++){
        if(arr[i]==x){
            flag=true;
        }
    }
    if(flag==true){
        cout<<"element found";

    }
    else cout<<"element absent";
}