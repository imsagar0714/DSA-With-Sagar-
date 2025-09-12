#include<iostream>
#include<vector>
using namespace std;
void display(vector<int>&v){
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
}
void reversepart(vector<int>&a,int i, int j){
    while(i<=j){
        int temp=a[i];
        a[i]=a[j];
        a[j]=temp;
        i++;
        j--;
    }

}
int main(){
    int n;
    cout<<"enter size of vector"<<endl;
    cin>>n;
    vector<int> v;
    cout<<"enter elements of vector";
    for(int i=0;i<n;i++){
        int q;
        cin>>q;
        v.push_back(q);
    }
    cout<<endl;
    int k;
    cout<<"ENTER NO OF STEPS TO ROTATE"<<endl;
    cin>>k;
    k=k%n;
    reversepart(v,0,n-k-1);
    reversepart(v,n-k,n-1);
    reversepart(v,0,n-1);
    display(v);
}