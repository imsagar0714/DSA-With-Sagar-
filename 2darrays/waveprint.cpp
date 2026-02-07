#include<bits/stdc++.h>
using namespace std;
int main(){
    int m;
    cout<<"enter number of rows";
    cin>>m;
    int n;
    cout<<"enter number of columns";
    cin>>n;
    int arr[m][n];
    for(int i=0;i<m;i++){
        for(int j=0;j<m;j++){
            cin>>arr[i][j];
        }
    }
    cout << endl;
    int minr=0;
    int maxr=m-1;
    int minc=0;
    int maxc=n-1;
    while(minr!=maxr){
        for(int i=minc;i<=maxc;i++){    //right
            cout<<arr[minr][i]<<" ";
        }
        minr++;
        for(int i=minc;i<=maxc;i++){    // down
            cout<<arr[i][maxc]<<" ";
        }
        maxc--;
        for(int i=maxc;i>=minc;i--){      // left
            cout<<arr[maxr][i]<<" ";
        }
        maxr--;
        for(int i=maxr;i>=minr;i--){      //up
            cout<<arr[minc][i]<<" ";
        }
        minc++;
    }
}