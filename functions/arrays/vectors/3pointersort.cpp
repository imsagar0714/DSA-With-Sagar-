#include<iostream>
#include<vector>
using namespace std;
void sortcolors(vector<int>&v){
    int lo=0;
    int mid=0;
    int hi=v.size()-1;
    while(mid<=hi){
        if(v[mid]==2){
            int temp=v[mid];
            v[mid]=v[hi];
            v[mid]=temp;
            hi--;
        }
        else if(v[mid]==0){
            int temp=v[mid];
            v[mid]=v[lo];
            v[lo]=temp;
            lo++;
            mid++;
        }
        else if(v[mid]==1){
            mid++;
        }
    }
     for(int i=0;i<8;i++){
        cout<<v[i]<< " ";
    }
    
    return ;
}
int main(){
    vector<int>v(8);
    cout<<"enter elements of vector"<<endl;
    for(int i=0;i<8;i++){
            cin>>v[i];
    }
    
    sortcolors(v);
   
}