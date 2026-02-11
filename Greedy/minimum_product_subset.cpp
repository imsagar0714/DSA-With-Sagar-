#include<bits/stdc++.h>
using namespace std;
int min_product(vector<int>&v){
    int n=v.size();
    sort(v.begin(),v.end());
    bool cz=0;
    int cp=0;
    int cn=0;
    int pos_pro=1;
    int neg_pro=1;
    int lar_neg=INT_MIN;
    for(int i=0;i<n;i++){
        if(v[i]<0){
            if(v[i]>lar_neg) lar_neg=v[i];
            cn++;
            neg_pro*=v[i]; 
        }
        else if(v[i]>0){
            pos_pro*=v[i];
            cp++;
        }
        else cz=1;
    }
    cout<<endl;
    if(cn==0){
        if(cz) return 0;
        return v[0];
    }
    else{
        if(cn%2==0){
            return ((pos_pro*neg_pro)/lar_neg);
        }
        else{
            return pos_pro*neg_pro;
        }
    }
}
int main(){
    vector<int>v={4,-5,-3};
    int ans=min_product(v);
    cout<<ans;
}