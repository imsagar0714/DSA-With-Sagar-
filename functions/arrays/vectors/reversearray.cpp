#include<iostream>
#include<vector>
using namespace std;
void display(vector<int> &a){
    for(int i=0;i<a.size();i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
}
int main(){
    vector<int> v(7);
    cout<<"enter elements of vector";
    for(int i=0;i<v.size();i++){
        cin>>v[i];
    }
    display(v);
    vector<int> v2(v.size());
    for(int i=0;i<v2.size();i++){
        v2[i]=v[v.size()-1-i];
    }
    display(v2);
}