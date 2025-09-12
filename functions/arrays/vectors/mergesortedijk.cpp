#include<iostream>
#include<vector>
using namespace std;
vector<int> merge(vector<int>&v1,vector<int>&v2){
    vector<int>res(13);
    int i=0;
    int j=0;
    int k=0;
    while(i<=4 && j<=7){
        if(v1[i]<v2[j]){
            res[k]=v1[i];
            i++;
            k++;
        }
        else{
            res[k]=v2[j];
            j++;
            k++;
        }
    }
    if(i==5){
        while(j<=7){
            res[k]=v2[j];
            k++;
            j++;
        }
    }
    if(j==7){
        while(i<=4){
            res[k]=v1[i];
            k++;
            i++;
        }
    }
    return res;
}
int main(){
    vector<int>v1(5);
    cout<<"enter elements of first array"<<endl;
    for(int i=0;i<5;i++){
        cin>>v1[i];
    }
    vector<int>v2(8);
    cout<<"enter elements of second array"<<endl;
    for(int i=0;i<8;i++){
        cin>>v2[i];
    }
    vector<int> v=merge(v1,v2);
    for(int i=0;i<8;i++){
        cout<<v[i]<<" ";
    }
}