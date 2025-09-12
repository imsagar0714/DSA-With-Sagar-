#include<iostream>
#include<vector>
using namespace std;
int search(vector<int>&v,int target){
    int n=v.size();
    int lo=0;
    int hi=n-1;
    while(lo<=hi){
        int mid=(lo+hi)/2;
        if(v[mid]==target){
            return mid;
        }
        else if(v[mid]<target){.
            lo=mid+1;
        }
        else if(v[mid]>target){
            hi=mid-1;
        }
    }
    return -1;
}
int main(){
    vector<int>v(10);
    cout<<"enter elemenmts in vector"<<endl;
    for(int i=0;i<10;i++){
        cin>>v[i];
    }
    int target;
    cout<<"enter target"<<endl;
    cin>>target;
    int num=search(v,target);
    if(num==-1){
        cout<<"not found";
    }
    else{
        cout<<"found";
    }

}