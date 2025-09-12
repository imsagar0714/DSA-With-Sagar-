#include<iostream>
#include<vector>
using namespace std;
void reverse(vector<int>&a){
    int i=0;
    int j=6;
    while(i<=j){
        int temp=a[i];
        a[i]=a[j];
        a[j]=temp;
        i++;
        j--;
    }
    for(int i=0;i<a.size();i++){
        cout<<a[i]<<" ";
    }
}
int main(){
    vector<int> v(7);
    cout<<"enter elements of vector";
    for(int i=0;i<v.size();i++){
        cin>>v[i];
    }
    cout<<endl;
    reverse(v);
    
}