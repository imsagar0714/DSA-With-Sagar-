#include<bits/stdc++.h>
using namespace std;
bool cmp(pair<int,int>a,pair<int,int>b){
    double r1=(double)a.first/a.second;
    double r2=(double)b.first/b.second;
    return r1>r2; 
}
double knapsack(vector<int>&p,vector<int>&w,int n,int W){
    vector<pair<int,int>>arr;
    for(int i=0;i<n;i++){
        arr.push_back({p[i],w[i]});
    }
    sort(arr.begin(),arr.end(),cmp);
    double profit=0;
    for(int i=0;i<n;i++){
        if(arr[i].second<=W){
            profit+=arr[i].first;
            W-=arr[i].second;
        }
        else{
            profit+=(arr[i].first/arr[i].second)*W;
            break;
        }
    }
    return profit;
}
int main(){
    vector<int>p={60,100,120};
    vector<int>w={10,20,30};
    int W=50;
    int n=p.size();
    double maxprofit=knapsack(p,w,n,W);
    cout<<maxprofit;
}