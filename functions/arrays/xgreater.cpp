#include<iostream>
#include<vector>
using namespace std;
int great(vector<int>&v,int x){
    int count=0;
    for(int i=0;i<v.size();i++){
        if(v[i]>x){
            count++;
        }
    }
    return count;
}
int main(){
    vector<int>v(8);
    cout<<"enter elements of vector"<<endl;
    for(int i=0;i<8;i++){
        cin>>v[i];
    }
    /*int x;
    cout<<"enter element x"<<endl;
    cin>>x;*/
    cout<great(v,7);
}