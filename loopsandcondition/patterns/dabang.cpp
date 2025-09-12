#include<iostream>
using namespace std;
int main(){
    int n,i,j;
    cout<<"enter a number";
    cin>>n;
    i=1;
    while(i<=n){
        j=1;
        while(j<=n-i+1){
            cout<<j;
            j++;
        }
        int star = i - 1;
        while (star)
        {
            cout << "*";
            star--;
        }
        int star2 = i - 1;
        while (star2)
        {
            cout << "*";
            star2 = star2 - 1;
        }
        int a=n-i+1;
        while(a){
            cout<<a;
            a=a-1;
        }
        cout<<endl;
        i++;
    }
}