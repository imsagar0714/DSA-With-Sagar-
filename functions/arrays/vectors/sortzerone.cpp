#include<iostream>
#include<vector>
using namespace std;
void sortedd(vector<int>&v){
    int i=0;
    int j=v.size()-1;
    while(i<=j){
        if(v[i]==0) i++;
        if(v[j]==1) j--;
        else if (v[i]==1 && v[j]==0){
            int temp=v[i];
            v[i]=v[j];
            v[j]=temp;
            i++;
            j--;
        } 
    }
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
}
int main(){
    vector<int> v(8);
    cout<<"enter elements of vector";
    for(int i=0;i<v.size();i++){
        cin>>v[i];
    }
    sortedd(v);
} 

