#include<iostream>
#include<vector>
using namespace std;
void revpart(vector<int>&v ,int i,int j){
    while(i<=j){
        int temp=v[i];
        v[i]=v[j];
        v[j]=temp;
        i++;
        j--;
    }
     for(int i=0;i<8;i++){
        cout<<v[i]<<" ";
    }
}
int main(){
    vector<int>v(8);
    cout<<"enter"<<endl;
    for(int i=0;i<8;i++){
        cin>>v[i];
    }
    revpart(v,1,6);
}