#include<bits/stdc++.h>
using namespace std;
void merge(vector<int>&a,vector<int>&b,vector<int>&res){
    int i=0;  // a
    int j=0;  // b
    int k=0;  // res
    while(i<a.size() && j<b.size()){
        if(a[i]<=b[j]){            
            res[k]=a[i];
            i++;
            k++;
        }
        else{
            res[k]=b[j];
            j++;
            k++;
        }
    }
    if(i==a.size()){             // a is at end
        while(j<b.size()){
            res[k]=b[j];
            j++;
            k++;
        }
    }
    if(j==b.size()){            // b is at end
        while(i<a.size()){
            res[k]=a[i];
            i++;
            k++;
        }
    }

}
void mergesort(vector<int>&v){
    int n =v.size();
    int n1=n/2;
    int n2=n-n/2;
    if(n==1) return;
    vector<int>a(n1);
    vector<int>b(n2);
    for(int i=0;i<n1;i++){                  
        a[i]=v[i];
    }
    for(int i=0;i<n2;i++){
        b[i]=v[i+n1];
    }
    //recursion
    mergesort(a);
    mergesort(b);
    // merge
    merge(a,b,v);
}
int main(){
    int arr[]={1,4,8,6,2,5,7,9};
    int n=sizeof(arr)/sizeof(arr[0]);
    vector<int>v(arr,arr+n);
    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    mergesort(v);
    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }
    
}