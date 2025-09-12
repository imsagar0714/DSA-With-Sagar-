#include<iostream>
using namespace std;
int main(){
    int n,i,j;
    cout<<"enter a number"<<endl;
    cin>>n;
    i=1;
    while(i<=n){
        j=1;
        int space=n-i;
        while(space){
            cout<<" ";
            space=space-1;
        }
        while(j<=i){
            cout<<j;
            j++;
        }
        int start=i-1;
        while(start){
            cout<<start;
            start=start-1;
        }
        cout<<endl;
        i++;
    }
}