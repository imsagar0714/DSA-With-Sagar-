#include<iostream>
#include<vector>
#include<climits>
using namespace std;
void largesthree(vector<int>&v){
    int max1=INT_MIN;
    int max2=INT_MIN;
    int max3=INT_MIN;
    int n=v.size();
    for(int i=0;i<n;i++){
        if(v[i]>max1){
            max3=max2;
            max2=max1;
            max1=v[i];
        }
        else if(v[i]>max2){
            max3=max2;
            max2=v[i];
        }
        else if(v[i]>max3){
            max3=v[i];
        }
    }
    cout<<"largest three :"<<max1<<" "<<max2<<" "<<max3;

}
int main(){
    vector<int>v(10);
    v={4,5,6,2,1,3,9,7,19,14};
    largesthree(v);
}