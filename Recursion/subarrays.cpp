#include<bits/stdc++.h>
using namespace std;
void subarray(vector<int>&nums,int i,vector<int>v){
    if(i==nums.size()){
        for(int j=0;j<v.size();j++){
            cout<<v[j];
        }
        cout<<endl;
        return;
    }
    subarray(nums,i+1,v);
    if(v.size()==0 || nums[i-1]==v[v.size()-1]){
        v.push_back(nums[i]);
        subarray(nums,i+1,v);
    }

}
int main(){
    vector<int>nums={1,2,3,4};
    vector<int>v;
    subarray(nums,0,v);
}