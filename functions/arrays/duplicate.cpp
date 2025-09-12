#include<iostream>
#include<vector>
using namespace std;
bool findduplicate(vector<int>&a){
    for(int i=0;i<a.size()-1;i++){
        for(int j=i+1;j<a.size();j++){
            if(a[i]==a[j]){
                return true;
                break;
            }
        }
    }
    return false;
}
int main(){
    vector<int>v(8);
    cout<<"enter elements of vector"<<endl;
    for(int i=0;i<8;i++){
        cin>>v[i];
    }
    if(findduplicate(v)) cout<<"present";
    else cout<<"absent";
}