#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v(7);
    cout<<"enter elements of vector";
    for(int i=0;i<v.size();i++){
        cin>>v[i];
    }
    int count=0;
    int x=8;
    for(int i=0;i<=6;i++){
        for(int j=i+1;j<=6;j++){
            if((v[i]+v[j])==x){
                count++;
                cout<<"("<<i<<","<<j<<")"<<endl;
            }
            
        }
    }
    
    cout<<count;
}